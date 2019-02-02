import java.net.*;
import java.util.*;
import java.lang.reflect.*;
import java.security.*;

class SandboxTest{

	static class SandboxPolicy extends Policy{
		
		@Override
		public Permissions getPermissions(ProtectionDomain code){
			Permissions granted = new Permissions();
			if(code.getClassLoader() == ClassLoader.getSystemClassLoader())
				granted.add(new AllPermission());
			return granted;
		}
	}

	public static void main(String[] args) throws Exception{
		URL[] site = {new URL("file:./cmd-inf/")};
		Policy.setPolicy(new SandboxPolicy());
		System.setSecurityManager(new SecurityManager());
		Scanner input = new Scanner(System.in);
		for(;;){
			System.out.print("COMMAND: ");
			String cmd = input.nextLine();
			if(cmd.length() == 0) continue;
			if(cmd.equals("Quit")) break;
			try{
				ClassLoader loader = new URLClassLoader(site);
				Class<?> c = Class.forName("commands." + cmd, false, loader);
				Method m = c.getMethod("execute", String.class);
				m.invoke(null, "Testing");
			}catch(Exception e){
				System.out.printf("Cannot execute %s: %s%n", cmd, e);
			}
			System.out.println();
		}
	}

}


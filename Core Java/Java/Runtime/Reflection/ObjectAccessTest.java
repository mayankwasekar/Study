import java.lang.reflect.*;

class ObjectAccessTest{

	private static void printAsXml(Object obj){
		Class<?> c = obj.getClass();
		System.out.printf("<%s>%n", c.getSimpleName());
		for(Field f : c.getDeclaredFields()){
			int m = f.getModifiers();
			if(Modifier.isStatic(m)) continue;
			System.out.printf("  <%s>", f.getName());
			try{
				if(!f.isAccessible()) f.setAccessible(true);
				System.out.printf("%s", f.get(obj));
			}catch(Exception e){
				System.out.print("field-access error");
			}
			System.out.printf("</%s>%n", f.getName());
		}
		System.out.printf("</%s>%n%n", c.getSimpleName());
	}

	public static void main(String[] args){
		printAsXml(new payroll.Employee(186, 52));
		printAsXml(new Interval(3, 45));
	}

}


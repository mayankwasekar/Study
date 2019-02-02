import java.io.*;
import java.net.*;
import java.util.*;

class ServerSocketTest2{

	public static void main(String[] args) throws Exception{
		ServerSocket listener = new ServerSocket(2055);
		for(int i = 0; i < 3; ++i){
			Thread servant = new Thread(new Runnable(){
				public void run(){
					try{
						service(listener);
					}catch(IOException e){}
				}
			});
			servant.start();
		}
	}

	private static void service(ServerSocket server) throws IOException{
		String[] symbols = {"APPL", "GOGL", "INTC", "MSFT", "ORCL"};
		Random rdm = new Random();
		for(;;){
			Socket client = server.accept();
			client.setSoTimeout(60000);
			InputStream in = client.getInputStream();
			OutputStream out = client.getOutputStream();
			BufferedReader reader = new BufferedReader(
				new InputStreamReader(in));
			PrintWriter writer = new PrintWriter(
				new OutputStreamWriter(out), true);
			try{
				writer.println("Welcome to stock-exchange");
				String symbol = reader.readLine();
				int i = Arrays.binarySearch(symbols, symbol);
				if(i >= 0)
					writer.printf("Price is %.2f%n", 0.01 * (rdm.nextInt(9000) + 1000));
				else
					writer.println("Price not available");
			}catch(Exception e){}
			writer.close();
			reader.close();
			client.close();
		}
	}

}


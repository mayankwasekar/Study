import java.io.*;
import java.net.*;

class SocketTest{

	public static void main(String[] args) throws Exception{
		String host = args.length > 1 ? args[1] : "localhost";
		Socket client = new Socket(host, 2055);
		BufferedReader reader = new BufferedReader(
			new InputStreamReader(client.getInputStream()));
		PrintWriter writer = new PrintWriter(
			new OutputStreamWriter(client.getOutputStream()));
		System.out.println(reader.readLine());
		writer.println(args[0]);
		writer.flush();
		System.out.println(reader.readLine());
		writer.close();
		reader.close();
		client.close();
	}

}


import java.io.*;
import java.net.*;

class URLTest{

	public static void main(String[] args) throws Exception{
		String site = String.format("http://localhost/stock.php?symbol=%s", args[0]);
		URL u = new URL(site);
		InputStream content = u.openStream();
		BufferedReader reader = new BufferedReader(new InputStreamReader(content));
		System.out.println(reader.readLine());
		reader.close();
	}

}


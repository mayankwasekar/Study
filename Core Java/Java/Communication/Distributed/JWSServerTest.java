import javax.xml.ws.*;

class JWSServerTest{

	public static void main(String[] args) throws Exception{
		System.setErr(new java.io.PrintStream("server.log"));
		Endpoint.publish("http://0.0.0.0:8055/shopping/customer.jws", new shopping.CustomerWS());
	}

}


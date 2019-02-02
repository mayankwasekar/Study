import java.rmi.*;

class RMIServerTest2{

	public static void main(String[] args) throws Exception{
		Naming.rebind("cartFactory", new shopping.CartFactoryImpl());
	}

}


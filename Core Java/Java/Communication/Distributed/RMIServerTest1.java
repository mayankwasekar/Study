import java.rmi.*;

class RMIServerTest1{

	public static void main(String[] args) throws Exception{
		Naming.rebind("shopKeeper", new shopping.ShopKeeperImpl());
	}

}


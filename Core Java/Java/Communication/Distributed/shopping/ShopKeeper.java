package shopping;

import java.rmi.*;

public interface ShopKeeper extends Remote{

	//RemoteException is thrown by stub implementation when 
	//it cannot connect to its remote object
	ItemInfo getItemInfo(String name) throws RemoteException;

	float getBulkDiscount(int quantity) throws RemoteException;
}


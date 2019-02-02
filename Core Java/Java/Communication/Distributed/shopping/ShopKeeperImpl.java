package shopping;

import java.rmi.*;

public class ShopKeeperImpl extends java.rmi.server.UnicastRemoteObject implements ShopKeeper{

	public ShopKeeperImpl() throws RemoteException{
		super(); //exports this object
	}

	public ItemInfo getItemInfo(String name){
		int item = Store.find(name);
		if(item >= 0){
			ItemInfo info = new ItemInfo();
			info.price = 1.06 * Store.priceOf(item);
			info.stock = Store.stockOf(item);
			return info;
		}
		return null;
	}

	public float getBulkDiscount(int quantity){
		return quantity < 6 ? 0 : 5;
	}
}


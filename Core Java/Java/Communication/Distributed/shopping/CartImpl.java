package shopping;

import java.rmi.*;

public class CartImpl extends java.rmi.server.UnicastRemoteObject implements Cart{
	
	private double payment;

	public CartImpl() throws RemoteException{}

	public boolean addItem(String name){
		int item = Store.find(name);
		if(item >= 0){
			payment += 1.06 * Store.priceOf(item);
			return true;
		}
		return false;
	}

	public double checkout() throws RemoteException{
		unexportObject(this, true); //close socket of this object 
		return payment;
	}
}


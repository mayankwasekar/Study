package shopping;

public class ItemInfo implements java.io.Serializable{
	
	double price;
	int stock;

	public final double getUnitPrice(){
		return price;
	}

	public final int getCurrentStock(){
		return stock;
	}
}


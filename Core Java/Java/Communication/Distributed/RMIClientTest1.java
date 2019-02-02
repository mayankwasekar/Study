import shopping.*;
import java.rmi.*;
import java.util.*;

class RMIClientTest1{

	public static void main(String[] args) throws Exception{
		ShopKeeper client = (ShopKeeper)Naming.lookup("rmi://localhost/shopKeeper");
		Scanner input = new Scanner(System.in);
		System.out.print("Item: ");
		String i = input.next();
		ItemInfo info = client.getItemInfo(i);
		if(info != null){
			System.out.print("Quantity: ");
			int q = input.nextInt();
			if(q > info.getCurrentStock())
				System.out.println("Item out of stock!");
			else{
				float r = client.getBulkDiscount(q);
				System.out.printf("Total payment: %.2f%n", q * info.getUnitPrice() * (1 - r / 100));
			}
		}else{
			System.out.println("Item not sold!");
		}
	}

}


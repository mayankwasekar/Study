import shopping.*;
import java.rmi.*;
import java.util.*;

class RMIClientTest2{

	public static void main(String[] args) throws Exception{
		CartFactory service = (CartFactory)Naming.lookup("rmi://localhost/cartFactory");
		Cart client = service.create();
		Scanner input = new Scanner(System.in);
		for(int n = 1;; ++n){
			System.out.printf("Item %d: ", n);
			String i = input.nextLine();
			if(i.length() == 0) break;
			System.out.printf("Adding %s to the cart...", i);
			if(client.addItem(i))
				System.out.println("succeeded.");
			else
				System.out.println("failed!");
		}
		System.out.printf("Total payment: %.2f%n", client.checkout());
		client.addItem("apple");
	}

}


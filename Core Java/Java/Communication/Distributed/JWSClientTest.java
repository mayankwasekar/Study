import shopping.client.*;
import java.util.*;

class JWSClientTest{

	public static void main(String[] args) throws Exception{
		Scanner input = new Scanner(System.in);
		CustomerService service = new CustomerService();
		CustomerSupport client = service.getCustomerClient();
		System.out.print("Item: ");
		String itm = input.next();
		int qty = client.inquire(itm);
		if(qty == 0){
			System.out.println("Not available!");
		}else{
			System.out.printf("Quantity [max=%d]: ", qty);
			qty = input.nextInt();
			Receipt r = client.purchase(itm, qty);
			System.out.printf("Order number is %d and payment is %.2f%n", r.getStatus(), r.getPayment());
		}
	}

}


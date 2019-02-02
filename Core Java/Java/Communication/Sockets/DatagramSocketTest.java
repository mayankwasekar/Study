import java.net.*;
import java.util.*;

class DatagramSocketTest{

	public static void main(String[] args) throws Exception{
		String[] symbols = {"APPL", "GOGL", "INTC", "MSFT", "ORCL"};
		Random rdm = new Random();
		InetAddress group = InetAddress.getByName("230.0.0.1");
		DatagramSocket publisher = new DatagramSocket();
		for(;;){
			int i = rdm.nextInt(symbols.length);
			String msg = String.format("%s - %.2f", symbols[i], 0.01 * (rdm.nextInt(9000) + 1000));
			DatagramPacket packet = new DatagramPacket(msg.getBytes(), msg.length(), group, 2056);
			publisher.send(packet);
			Thread.sleep(10000);
		}
	}

}


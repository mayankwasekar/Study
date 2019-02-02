import java.net.*;

class MulticastSocketTest{

	public static void main(String[] args) throws Exception{
		InetAddress group = InetAddress.getByName("230.0.0.1");
		MulticastSocket subscriber = new MulticastSocket(2056);
		subscriber.joinGroup(group);
		for(int i = 0; i < 5; ++i){
			DatagramPacket packet = new DatagramPacket(new byte[80], 80);
			subscriber.receive(packet);
			String msg = new String(packet.getData(), 0, packet.getLength());
			System.out.println(msg);
		}
		subscriber.leaveGroup(group);
		subscriber.close();
	}

}


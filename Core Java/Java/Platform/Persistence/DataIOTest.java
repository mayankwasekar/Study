import java.io.*;

class DataIOTest{

	public static void main(String[] args) throws Exception{
		if(args.length > 2){
			String name = args[0];
			float price = Float.parseFloat(args[1]);
			short stock = Short.parseShort(args[2]);
			DataOutputStream target = new DataOutputStream(
				new FileOutputStream("product.dat"));
			target.writeShort(stock);
			target.writeFloat(price);
			target.writeUTF(name);
			target.close();
		}else{
			DataInputStream source = new DataInputStream(
				new FileInputStream("product.dat"));
			short stock = source.readShort();
			float price = source.readFloat();
			String name = source.readUTF();
			source.close();
			System.out.printf("%s %s %s%n", name, price, stock);
		}
	}

}


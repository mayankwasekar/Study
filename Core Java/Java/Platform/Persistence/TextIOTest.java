import java.io.*;

class TextIOTest{

	public static void main(String[] args) throws Exception{
		if(args.length > 2){
			String name = args[0];
			float price = Float.parseFloat(args[1]);
			short stock = Short.parseShort(args[2]);
			PrintWriter target = new PrintWriter(
				new OutputStreamWriter(
				new FileOutputStream("product.txt")));
			target.println(stock);
			target.println(price);
			target.println(name);
			target.close();
		}else{
			BufferedReader source = new BufferedReader(
				new InputStreamReader(
				new FileInputStream("product.txt")));
			short stock = Short.parseShort(source.readLine());
			float price = Float.parseFloat(source.readLine());
			String name = source.readLine();
			source.close();
			System.out.printf("%s %s %s%n", name, price, stock);
		}
	}

}


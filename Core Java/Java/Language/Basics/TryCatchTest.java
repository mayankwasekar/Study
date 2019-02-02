class TryCatchTest{

	private static void run(String[] args){
		try{
			double value = Double.parseDouble(args[0]);
			System.out.printf("Square of %f is %f%n", value, value * value);
		}catch(ArrayIndexOutOfBoundsException e){
			System.out.println("No input.");
		}catch(NumberFormatException e){
			System.out.println("Bad input.");
		}
	}

	public static void main(String[] args){
		run(args);
		System.out.println("Done!");
	}
}


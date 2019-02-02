interface Filter{
	boolean allowed(int value);
}

class ArrayPrinter{
	
	public static void printSquares(String label, int[] values){
		System.out.printf("%s:", label);
		for(int value : values){
			System.out.printf(" %d", value * value);
		}
		System.out.println();
	}	

	public static void printSquaresIf(String label, int[] values, Filter condition){
		System.out.printf("%s:", label);
		for(int value : values){
			if(condition.allowed(value))
				System.out.printf(" %d", value * value);
		}
		System.out.println();
	}
}

class LambdaTest{

	private static boolean isOdd(int n){
		return (n % 2) == 1;
	}

	public static void main(String[] args){
		int[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		ArrayPrinter.printSquares("All squares", numbers);
		//passing a method reference for a functional interface(an interface with exactly one abstract method)
		ArrayPrinter.printSquaresIf("Odd squares", numbers, LambdaTest::isOdd);
		//passing a lambda expression for a functional interface
		ArrayPrinter.printSquaresIf("Big squares", numbers, n -> n > 5);
	}

}


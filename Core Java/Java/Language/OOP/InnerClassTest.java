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
	
	/*
	public static void printSquaresForOdd(String label, int[] values){
		System.out.printf("%s:", label);
		for(int value : values){
			if((value % 2) == 1)
				System.out.printf(" %d", value * value);
		}
		System.out.println();
	}
	*/

	public static void printSquaresIf(String label, int[] values, Filter condition){
		System.out.printf("%s:", label);
		for(int value : values){
			if(condition.allowed(value))
				System.out.printf(" %d", value * value);
		}
		System.out.println();
	}
}

class InnerClassTest{

	//inner nested class 
	//it can only refer to static members of outer class
	//it can defined static as well as non-static members
	static class OddFilter implements Filter{
		
		public boolean allowed(int n){
			return (n % 2) == 1;
		}
	}

	//inner member class
	//it can refer to static as well as non-static members of outer class
	//can only defined non-static member 
	class BigFilter implements Filter{
	
		private int limit;

		public BigFilter(int l){
			limit = l;
		}

		public boolean allowed(int n){
			return n > limit;
		}
	}

	public static void main(String[] args){
		int[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		ArrayPrinter.printSquares("All squares", numbers);
		//ArrayPrinter.printSquaresForOdd("Odd squares", numbers);
		ArrayPrinter.printSquaresIf("Odd squares", numbers, new InnerClassTest.OddFilter());
		ArrayPrinter.printSquaresIf("Big squares", numbers, new InnerClassTest().new BigFilter(5));
		int max = 4; //captured by inner local class so it will be effectively final
		//passing an instance of inner local anonymous class
		ArrayPrinter.printSquaresIf("Low squares", numbers, new Filter(){
			public boolean allowed(int n){
				return n <= max; //capturing max by value
			}
		});
		//max += 10;
	}

}


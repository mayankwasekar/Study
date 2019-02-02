class VarArgTest{

	/*
	private static double average(double first, double second){
		return (first + second) / 2;
	}

	private static double average(double first, double second, double third){
		return (first + second + third) / 3;
	}
	*/

	private static double average(double first, double second, double... remaining){
		double sum = first + second;
		for(double value : remaining)
			sum += value;
		return sum / (2 + remaining.length);
	}

	public static void main(String[] args){
		System.out.printf("Average of two values = %s%n", average(23.1, 28.4));		
		System.out.printf("Average of three values = %s%n", average(23.1, 28.4, 17.2));
		System.out.printf("Average of five values = %s%n", average(23.1, 28.4, 17.2, 31.5, 14.8));
	}
}


class MethodTest{
	
	private static double getIncome(double invest, int period, float rate){
		double amount = invest * Math.pow(1 + rate / 100, period);
		return amount - invest;
	}

	private static double getIncome(double invest, int period){
		return getIncome(invest, period, 8);
	}

	public static void main(String[] args){
		System.out.println("Investing 75000 ...");
		System.out.printf("Income in gold scheme: %.2f%n", getIncome(75000, 3, 9));
		System.out.printf("Income in silver scheme: %.2f%n", getIncome(75000, 3));
	}
}


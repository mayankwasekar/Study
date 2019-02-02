class AutoBoxTest1{

	private static Double getBalance(String name){
		String[] names = {"jack", "jill", "john", "jane", "jeff"};
		double[] balances = {9000, 11000, 14000, 12000, 8000};
		for(int i = 0; i < names.length; ++i){
			if(names[i].equals(name))
				return balances[i]; //auto-boxing: Double.valueOf(balances[i])
		}
		return null;
	}

	public static void main(String[] args){
		Double bal = getBalance(args[0]);
		if(bal != null){
			double b = bal; //unboxing: bal.doubleValue()
			System.out.printf("Balance is %.2f%n", b);
		}else{
			System.out.println("No such name!");
		}
	}

}


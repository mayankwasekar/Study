interface TaxPayer{
	
	double getAnnualIncome();

	//a method added to the interface with default implementation 
	//which can be used by a class that has already implemented 
	//the interface before this method was added
	default double getIncomeTax(int age){
		float tr = age < 60 ? 0.15f : 0.12f;
		double ex = getAnnualIncome() - 200000;
		return ex > 0 ? tr * ex : 0;
	}
}

class Manager extends payroll.Employee implements TaxPayer{
	
	public Manager(int dpm){
		super(8 * dpm, 250);
	}

	public double getAnnualIncome(){
		return 12 * super.getIncome() + 125000;
	}
}

class Dealer implements TaxPayer{
	
	private double sales;

	public Dealer(double spm){
		sales = spm;
	}

	public double getAnnualIncome(){
		return 2.4 * sales;
	}
}

class InterfaceTest2{

	public static void main(String[] args){
		TaxPayer jill = new Manager(24);
		TaxPayer jack = new Dealer(240000);
		System.out.printf("Income tax of Manager Jill is %.2f%n", jill.getIncomeTax(36));
		System.out.printf("Income tax of Dealer Jack is %.2f%n", jack.getIncomeTax(63));
	}
}


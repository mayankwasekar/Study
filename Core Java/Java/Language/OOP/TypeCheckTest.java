import payroll.*;

class TypeCheckTest{

	private static double getAverageIncome(Employee[] group){
		double total = 0;
		for(Employee member : group){
			total += member.getIncome();
		}
		return total / group.length;
	}

	private static double getTotalSales(Employee[] group){
		double total = 0;
		for(Employee member : group){
			if(member instanceof SalesPerson){
				SalesPerson sp = (SalesPerson)member; //explicit narrowing
				total += sp.getSales();
			}
		}
		return total;
	}

	public static void main(String[] args){
		Employee[] dept = new Employee[5]; 
		dept[0] = new Employee(186, 52);
		dept[1] = new Employee(175, 250);
		dept[2] = new SalesPerson(168, 44, 36000); //implicit widening
		dept[3] = new Employee(180, 150); 
		dept[4] = new SalesPerson(195, 65, 64000);
		System.out.printf("Average income: %.2f%n", getAverageIncome(dept));
		System.out.printf("Total Sales: %.2f%n", getTotalSales(dept));
	}

}


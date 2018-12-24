#include "payroll2.h"
#include <iostream>
#include <typeinfo>

using namespace Payroll;
using namespace std;

class SalesAgent : public SalesPerson
{
public:
	SalesAgent(double s) : SalesPerson(0, 0, s)
	{
	}

	double GetIncome() const
	{	
		return 0.15 * GetSales();
	}
};

double GetTotalSales(Employee* group[], int count)
{
	double total = 0;

	for(int i = 0; i < count; ++i)
	{
		SalesPerson* s = dynamic_cast<SalesPerson*>(group[i]);
		if(s)
			total += s->GetSales();
	}

	return total;
}

int main(void)
{
	Employee* dept[5];
	dept[0] = new Employee(186, 52);
	dept[1] = new Employee(175, 95);
	dept[2] = new SalesPerson(190, 45, 65000);
	dept[3] = new Employee(168, 204);
	dept[4] = new SalesAgent(135000);
	
	cout << "Total Sales = "
		 << GetTotalSales(dept, 5) 
		 << endl;

	for(int i = 0; i < 5; ++i)
		delete dept[i];
}


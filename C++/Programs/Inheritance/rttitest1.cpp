#include "payroll2.h"
#include <iostream>
#include <typeinfo>

using namespace Payroll;
using namespace std;

double GetTotalSales(Employee* group[], int count)
{
	double total = 0;

	for(int i = 0; i < count; ++i)
	{
		if(typeid(*group[i]) == typeid(SalesPerson))
		{		
			SalesPerson* s = static_cast<SalesPerson*>(group[i]);
			total += s->GetSales();
		}
	}

	return total;
}

int main(void)
{
	Employee* dept[5];
	dept[0] = new Employee(186, 52);
	dept[1] = new Employee(175, 95);
	dept[2] = new SalesPerson(190, 45, 65000); //implicit upcasting
	dept[3] = new Employee(168, 204);
	dept[4] = new SalesPerson(155, 54, 35000);
	
	cout << "Total Sales = "
		 << GetTotalSales(dept, 5) 
		 << endl;

	for(int i = 0; i < 5; ++i)
		delete dept[i];
}


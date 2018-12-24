#include "payroll1.h"
#include <iostream>

using namespace Payroll;
using namespace std;

double GetIncomeTax(const Employee& m)
{
	double i = m.GetIncome();
	return i > 10000 ? 0.15 * (i - 10000) : 0;
}

double GetIncomeTax(const SalesPerson& m)
{
	double i = m.GetIncome();
	return i > 10000 ? 0.15 * (i - 10000) : 0;
}


int main(void)
{
	Employee jack;
	jack.SetHours(186);
	jack.SetRate(52);
	cout << "Jack's Income is "
		 << jack.GetIncome()
		 << " and Tax is "
		 << GetIncomeTax(jack)
		 << endl;
	
	SalesPerson jill(186, 52, 64000);
	cout << "Jill's Income is "
		 << jill.GetIncome()
		 << " and Tax is "
		 << GetIncomeTax(jill)
		 << endl;
}


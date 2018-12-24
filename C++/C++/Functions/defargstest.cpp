#include <iostream>

using namespace std;

extern double Power(double, long);

double GetIncome(double invest, long period, float rate=7)
{
	double amount = invest * Power(1 + rate / 100, period);

	return amount - invest;
}

int main(void)
{
	double p;
	long n;

	cout << "Enter investment and period: ";
	cin >> p >> n;

	cout << "Income in Gold scheme = "
		 << GetIncome(p, n, 8)
		 << endl;

	cout << "Income in Silver scheme = "
		 << GetIncome(p, n)  //GetIncome(p, n, 7);
		 << endl;
}









#include <iostream>

using namespace std;

extern double Power(double, long);

double GetIncome(double invest, long period, float rate)
{
	double amount = invest * Power(1 + rate / 100, period);

	return amount - invest;
}

//Will be expanded to its implementation at its call-site
inline double GetIncome(double invest, long period)
{
	return GetIncome(invest, period, period < 3 ? 7 : 7.5);
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
		 << GetIncome(p, n)  //GetIncome(p, n, n < 3 ? 7 : 7.5);
		 << endl;
}









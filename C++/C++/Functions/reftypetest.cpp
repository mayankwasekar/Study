#include <iostream>

using namespace std;

double Average(double first, double second, double& deviation)
{
	deviation = first > second ? (first - second) / 2 : (second - first) / 2;

	return (first + second) / 2;

}


int main(void)
{
	double a, b, c, d;

	cout << "Enter two real values: ";
	cin >> b >> c;

	a = Average(b, c, d);

	cout << "Average is " << a << " with deviation of " << d << endl;
}

/* 
long UsePtr(void)
{
	long a = 23;
	long b = 32;
	long* pa = &a;
	long* pb = &b;

	return (*pa) * (*pb);
}

long UseRef(void)
{
	long a = 23;
	long b = 32;
	long& ra = a;
	long& rb = b;

	return ra * rb;
}
*/



#include "interval.h"
#include <iostream>

using namespace std;

template<typename T>
void BoxPrint(const T& value)
{
	cout << "[" << value << "]" << endl;
}

template<> //explicit specialization of BoxPrint function template for T=bool
void BoxPrint(const bool& value) //BoxPrint<bool>
{
	BoxPrint(value ? "true" : "false");
}

template<>
void BoxPrint(const Interval& value) //BoxPrint<Interval>
{
	if(value.Seconds() < 10)
		cout << "[" << value.Minutes() << ":0" << value.Seconds() << "]" << endl;
	else
		cout << "[" << value.Minutes() << ":" << value.Seconds() << "]" << endl;
}

int main(void)
{
	double a = 4.32;
	BoxPrint(a);

	long b = 54;
	BoxPrint(b);

	bool c = true;
	BoxPrint(c);

	bool d = false;
	BoxPrint(d);

	Interval e(3, 45);
	BoxPrint(e);
}


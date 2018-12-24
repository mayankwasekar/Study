#include <iostream>

using namespace std;
/*
void Swap(long& first, long& second)
{
	long third = first;
	first = second;
	second = third;
}

void Swap(double& first, double& second)
{
	double third = first;
	first = second;
	second = third;
}
*/

template<typename T>
void Swap(T& first, T& second) //Swap function template
{
	T third = first;
	first = second;
	second = third;
}

int main(void)
{
	long lx = 23, ly = 32;
	cout << "Original long values = " << lx << ", " << ly << endl;
	Swap<long>(lx, ly); //templated Swap function with T=long
	cout << "Swapped long values = " << lx << ", " << ly << endl;

	double dx = 5.4, dy = 4.5;
	cout << "Original double values = " << dx << ", " << dy << endl;
	Swap(dx, dy); //Swap<double>(dx, dy) - type inference
	cout << "Swapped double values = " << dx << ", " << dy << endl;
}


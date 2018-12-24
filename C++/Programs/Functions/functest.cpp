#include <iostream>

extern double Power(double, long);

int main(void)
{
	double b;
	long i;

	std::cout << "Enter base and index: ";
	std::cin >> b >> i;
	
	std::cout << "Result = "
			  << Power(b, i)  //In C++ a function is identified 
			  				  //by its name and its parameter types
							  //but not by its return type
			  << std::endl;
}




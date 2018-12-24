#include <iostream>

using namespace std;

extern "C" long CountPrimes(long, long);

int main(void)
{
	long l, u;

	cout << "Enter lower and upper limit: ";
	cin >> l >> u;

	cout << "Number of primes = "
		 << CountPrimes(l, u)
		 << endl;
}




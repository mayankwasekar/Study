#include "banking1.h"
#include <iostream>

using namespace Banking;
using namespace std;

int main(void)
{
	CurrentAccount* jack = new CurrentAccount;
	jack->Deposit(15000);

	SavingsAccount* jill = new SavingsAccount;
	jill->Deposit(10000);

	double amt;
	cout << "Amount to transfer: ";
	cin >> amt;

	try
	{
		jill->Transfer(amt, jack);
		cout << "Transfer succeeded." << endl;
	}
	catch(InsufficientFunds)
	{
		cout << "Transfer failed!" << endl;
	}

	cout << "Jack's Balance = " << jack->Balance() << endl;
	cout << "Jill's Balance = " << jill->Balance() << endl;

	delete jill;
	delete jack;
}


#include "banking2.h"
#include <iostream>

using namespace Banking;
using namespace std;

void DeductTax(Account* accounts[], int count)
{
	for(int i = 0; i < count; ++i)
	{
		double extra = accounts[i]->Balance() - 25000;
		if(extra > 0)
			accounts[i]->Withdraw(0.05 * extra);
	}
}

void PayAnnualInterest(Account* accounts[], int count)
{
	for(int i = 0; i < count; ++i)
	{
		Profitable* p = dynamic_cast<Profitable*>(accounts[i]); // side-casting: converting one base to another in MI
		if(p)
		{
			double interest = p->GetInterest(1);
			accounts[i]->Deposit(interest);
		}
	}
}

int main(void)
{
	Account* bank[4];
	bank[0] = OpenSavingsAccount();
	bank[0]->Deposit(5000);
	bank[1] = OpenCurrentAccount();
	bank[1]->Deposit(20000);
	bank[2] = OpenCurrentAccount();
	bank[2]->Deposit(30000);
	bank[3] = OpenSavingsAccount();
	bank[3]->Deposit(35000);

	DeductTax(bank, 4);
	PayAnnualInterest(bank, 4);

	for(int i = 0; i < 4; ++i)
	{
		cout << (i + 1) << "\t" << bank[i]->Balance() << endl;
		delete bank[i];
	}
}


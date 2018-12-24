#include "banking2.h"

namespace Banking
{

	class CurrentAccount : public Account
	{
	public:
		void Deposit(double);
		void Withdraw(double) throw(InsufficientFunds);
	};

	class SavingsAccount : public Account, public Profitable
	{
	public:
		SavingsAccount();
		void Deposit(double);
		void Withdraw(double) throw(InsufficientFunds);
		double GetInterest(short) const;
	};
	
	Account::Account()
	{
		balance = 0;
	}
	
	double Account::Balance() const
	{
		return balance;
	}

	void Account::Transfer(double amount, Account* that) throw(InsufficientFunds)
	{
		if(this != that)
		{
			this->Withdraw(amount);
			that->Deposit(amount);
		}
	}

	void CurrentAccount::Withdraw(double amount) throw(InsufficientFunds)
	{
		balance -= amount;
	}

	void CurrentAccount::Deposit(double amount)
	{
		if(balance < 0)
			amount *= 0.9;
		balance += amount;
	}

	SavingsAccount::SavingsAccount()
	{
		balance = 5000;
	}

	void SavingsAccount::Deposit(double amount)
	{
		balance += amount;
	}

	void SavingsAccount::Withdraw(double amount) throw(InsufficientFunds)
	{
		if(balance - amount < 5000)
			throw InsufficientFunds();
		balance -= amount;
	}

	double SavingsAccount::GetInterest(short period) const
	{
		float rate = balance < 20000 ? 4 : 4.5;
		return balance * period * rate / 100;
	}

	Account* OpenCurrentAccount(void)
	{
		return new CurrentAccount;
	}

	Account* OpenSavingsAccount(void)
	{
		return new SavingsAccount;
	}

	void CloseAccount(Account* acc)
	{
		delete acc;
	}
}


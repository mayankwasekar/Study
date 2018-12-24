#ifndef BANKING1_H
#define BANKING1_H

namespace Banking
{
	class InsufficientFunds{};

	class Account
	{
	public:
		Account();
		double Balance() const;
		virtual void Deposit(double) = 0; //pure virtual method
		virtual void Withdraw(double) throw(InsufficientFunds) = 0;
		void Transfer(double, Account*) throw(InsufficientFunds);
		virtual ~Account(){} 
	protected:
		double balance;
	};

	class CurrentAccount : public Account
	{
	public:
		void Deposit(double);
		void Withdraw(double) throw(InsufficientFunds);
	};

	class SavingsAccount : public Account
	{
	public:
		SavingsAccount();
		void Deposit(double);
		void Withdraw(double) throw(InsufficientFunds);
		double GetInterest(short) const;
	};
	
}

#endif


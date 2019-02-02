package edu.met.banking;

final class SavingsAccount extends Account implements Profitable{
	
	static final double MIN_BAL = 5000;

	SavingsAccount(){
		balance = MIN_BAL;
	}

	public void deposit(double amount){
		balance += amount;
	}

	public void withdraw(double amount) throws InsufficientFundsException{
		if(balance - amount < MIN_BAL)
			throw new InsufficientFundsException();
		balance -= amount;
	}

	public double getInterest(int period){
		float rate = balance < 3 * MIN_BAL ? MIN_RATE : MIN_RATE + 1;
		return balance * period * rate / 100;
	}
}


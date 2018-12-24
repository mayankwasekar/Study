#include <iostream>

using namespace std;

class TaxPayer
{
public:
	TaxPayer(long pn)
	{
		pin = pn;
		++count;
	}
	
	virtual double AnnualIncome() const = 0;

	double GetIncomeTax() const
	{
		double ex = AnnualIncome() - 120000;
		float tr = 0.15;

		return tr * ex * (ex > 0);
	}

	long PIN() const
	{
		return pin;
	}

	static int Count()
	{
		return count;
	}
	~TaxPayer()
	{
		count--;
	}
private:
	long pin;
	static int count;
};

int TaxPayer::count = 0;

void Print(const TaxPayer& tp)
{
	cout << "PIN is " << tp.PIN()
		 << " and Tax is " << tp.GetIncomeTax()
		 << endl;
}

class Employee : public virtual TaxPayer
{
public:
	Employee(long pn, double sy) : TaxPayer(pn)
	{
		salary = sy;
	}

	double AnnualIncome() const
	{
		return 12 * salary + 25000;
	}
private:
	double salary;
};

class Dealer : public virtual TaxPayer
{
public:
	Dealer(long pn, double ss) : TaxPayer(pn)
	{	
		sales = ss;
	}

	double AnnualIncome() const
	{
		return 0.15 * sales;
	}
private:
	double sales;
};

class SalesPerson : public Employee, public Dealer
{
public:
	SalesPerson(long pn, double sy, double ss) : Employee(pn, sy), Dealer(pn, ss), TaxPayer(pn)
	{
	}

	double AnnualIncome() const
	{
		return Employee::AnnualIncome() - 25000 + Dealer::AnnualIncome() / 3;
	}
};

int main(void)
{
	Employee jill(123456, 24000);
	Dealer jack(234567, 4600000);
	SalesPerson john(345678, 18000, 2100000);

	cout << "Jill the Employee: ";
	Print(jill);
	cout << "Jack the Dealer: ";
	Print(jack);
	cout << "John the SalesPerson: ";
	Print(john);

	cout << &jill << "\t" << static_cast<TaxPayer*>(&jill) << endl;

	cout << "Number of TaxPayer = " << TaxPayer::Count() << endl;
}


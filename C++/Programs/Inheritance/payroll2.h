#ifndef PAYROLL2_H
#define PAYROLL2_H

#include <iostream>

namespace Payroll
{
	class Employee
	{
	public:
		explicit Employee(short h=0, float r=50)
		{
			hours = h;
			rate = r;
			#ifdef _TESTING
			std::cout << "Employee instance activated" << std::endl;
			#endif
		}

		short GetHours() const
		{
			return hours;
		}

		void SetHours(short value)
		{
			hours = value;
		}
		
		float GetRate() const
		{
			return rate;
		}

		void SetRate(float value)
		{
			rate = value;
		}

		//overridable method
		virtual double GetIncome() const
		{
			double income = hours * rate;
			short ot = hours - 180;

			if(ot > 0)
				income += 50 * ot;

			return income;
		}

		virtual ~Employee()
		{
			#ifdef _TESTING
			std::cout << "Employee instance deactivated" << std::endl;
			#endif
		}
	private:
		short hours;
		float rate;
	};

	class SalesPerson : public Employee
	{
	public:
		SalesPerson(short h, float r, double s) : Employee(h, r)
		{
			sales = s;
			#ifdef _TESTING
			std::cout << "SalesPerson instance activated" << std::endl;
			#endif
		}

		virtual double GetSales() const
		{
			return sales;
		}

		void SetSales(double value)
		{
			sales = value;
		}

		//overiding method of base class
		double GetIncome() const
		{
			double income = Employee::GetIncome();

			if(sales >= 20000)
				income += 0.05 * sales;

			return income;
		}

		~SalesPerson()
		{
			#ifdef _TESTING
			std::cout << "SalesPerson instance deactivated" << std::endl;
			#endif
		}//~Employee()

	private:
		double sales;
	};
}

#endif



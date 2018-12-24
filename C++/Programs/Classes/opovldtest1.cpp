#include <iostream>

using namespace std;

class Interval
{
public:
	Interval(long m, long s)
	{
		seconds = 60 * m + s;
	}

	Interval(long t=0)
	{
		seconds = t;
	}

	long GetTime() const 
	{
		return seconds; 
	}

	void Print() const
	{
		if((seconds % 60) < 10)
			cout << (seconds / 60) << ":0" << (seconds % 60) << endl;
		else
			cout << (seconds / 60) << ":" << (seconds % 60) << endl;
	}

	Interval operator+(const Interval& rhs) const
	{
		return Interval(seconds + rhs.seconds);
	}

	Interval operator++()
	{
		return Interval(++seconds);
	}

	Interval operator++(int)
	{
		return Interval(seconds++);
	}

private:
	long seconds;

//a non-member function defined by the author of a class
//which can access private members of that class
friend Interval operator*(long, const Interval&);
};

Interval operator*(long lhs, const Interval& rhs)
{
	return Interval(lhs * rhs.seconds);
}

int main(void)
{
	Interval a(5, 45);
	a.Print();

	Interval b(210);
	b.Print();

	Interval c = a + b; //a.operator+(b)
	c.Print();

	Interval d = 3 * c; //operator*(3, c)
	d.Print();

	Interval e = ++d; //d.operator++()
	d.Print();
	e.Print();

	Interval f = e++; //e.operator++(0)
	e.Print();
	f.Print();
}


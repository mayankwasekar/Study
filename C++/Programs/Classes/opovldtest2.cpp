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

	long operator[](int index) const
	{
		return index ? (seconds / 60) : (seconds % 60);
	}

	operator float() const 
	{
		return seconds / 60.0;
	}

private:
	long seconds;

};


int main(void)
{
	Interval a(5, 45);
	a.Print();
	cout << "Above Interval has " << a[1] << " minutes and " << a[0] << " seconds." << endl;

	float b = a; //a.float()
	cout << b << endl;
}


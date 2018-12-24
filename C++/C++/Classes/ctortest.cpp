#include <iostream>

using namespace std;

class Interval
{
public:
	//default constructor - a constructor which can be called with zero argument.
	Interval()
	{
		seconds = 0; //initialization
	}
	
	//conversion constructor - a constructor which can be called with a single argument.
	Interval(long time)
	{
		seconds = time;
	}
	
	//parameterized constructor - a constructor which can be called with multiple arguments.
	Interval(long s, long m)
	{
		seconds = 60 * m + s;
	}

	void SetTime(long value) 
	{
		seconds = value; 
	}

	long GetTime() 
	{
		return seconds;
	}

	void Print()
	{
		if((seconds % 60) < 10)
			cout << (seconds / 60) << ":0" << (seconds % 60) << endl;
		else
			cout << (seconds / 60) << ":" << (seconds % 60) << endl;
	}
private:
	long seconds;
};


int main(void)
{
	Interval jack; //activating instance of Interval using default constructor 
	jack.SetTime(125);
	cout << "Jack's Interval = ";
	jack.Print();

	Interval john = 200; //activating instance of Interval using conversion constructor
	cout << "John's Interval = ";
	john.Print();

	Interval jeff(70, 3); //activating instance of Interval using parameterized constructor
	cout << "Jeff's Interval = ";
	jeff.Print();
}


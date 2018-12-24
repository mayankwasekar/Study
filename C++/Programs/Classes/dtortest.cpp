#include <iostream>

using namespace std;

class Interval
{
public:
	//Constructor - initializes the object
	Interval(long s=0, long m=0)
	{
		seconds = 60 * m + s;
		++count;
	}

	void SetTime(long value) 
	{
		seconds = value; 
	}

	long GetTime() 
	{
		return seconds;
	}

	//It refers to non-static members so it requires 'this' argument
	//which points to the object on which the method is invoked
	//using member selection operator
	void Print()
	{
		if((seconds % 60) < 10)
			cout << (seconds / 60) << ":0" << (seconds % 60) << endl;
		else
			cout << (seconds / 60) << ":" << (seconds % 60) << endl;
	}

	//It only refers to static members so it does not require 'this' argument
	//and it can be invoked on the class using scope resolution operator
	static int CountInstances()
	{
		return count;
	}

	//Destructor - finalizes the object
	~Interval()
	{
		count--;
	}

private:
	long seconds; //each instance will receive a separate value for this field.
	static int count; //all instances will share a single value for this field.
};

int Interval::count = 0; //allocating memory space for static field.

void Run(void)
{
	cout << "Activating Interval instance for john" << endl;
	Interval john = 200; 
	cout << "John's Interval = ";
	john.Print();
	cout << "Deactivating Interval instance for john" << endl;
}

int main(void)
{
	cout << "Activating Interval instance for jack" << endl;
	Interval jack;  
	jack.SetTime(125);
	cout << "Jack's Interval = ";
	jack.Print();

	Run();

	cout << "Activating Interval instance for jeff" << endl;
	Interval jeff(70, 3);
	cout << "Jeff's Interval = ";
	jeff.Print();

	cout << "Number of active Interval instances = "
		 << Interval::CountInstances()
		 << endl;

	cout << "Deactivating Interval instance for jeff" << endl;
	cout << "Deactivating Interval instance for jack" << endl;
}


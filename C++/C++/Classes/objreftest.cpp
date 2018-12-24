#include <iostream>

using namespace std;

class Interval
{
public:
	//Cannot be used as (implicit) conversion constructor
	explicit Interval(long s=0, long m=0)
	{
		seconds = 60 * m + s;
		++count;
	}

	void SetTime(long value) 
	{
		seconds = value; 
	}
	
	long GetTime() const //long Interval::GetTime(const Interval* this)
	{
		return seconds; //this -> seconds
	}

	void Print() const
	{
		if((seconds % 60) < 10)
			cout << (seconds / 60) << ":0" << (seconds % 60) << endl;
		else
			cout << (seconds / 60) << ":" << (seconds % 60) << endl;
	}

	static int CountInstances()
	{
		return count;
	}

	~Interval()
	{
		count--;
	}

private:
	long seconds;
	static int count;
};

int Interval::count = 0;

float Speed(float distance, const Interval& duration)
{
	return 3.6 * distance / duration.GetTime(); //Interval::GetTime(&duration)
}

int main(void)
{
	Interval jack;  
	jack.SetTime(125);
	cout << "Jack's Interval = ";
	jack.Print();
	cout << "Jack's speed = " << Speed(500, jack) << endl;

	Interval jeff(200);
	cout << "Jeff's Interval = ";
	jeff.Print();
	cout << "Jeff's speed = " << Speed(500, jeff) << endl;

	cout << "Number of active Interval instances = "
		 << Interval::CountInstances()
		 << endl;

}


#include <iostream>

using namespace std;

class Interval
{
public:
	Interval(long m, long s)
	{
		minutes = m + s / 60;
		seconds = s % 60;
		cout << "Interval instance activated using parameterized constructor" << endl;
	}

	Interval()
	{
		minutes = seconds = 0;
		cout << "Interval instance activated using default constructor" << endl;
	}

	//copy constructor
	Interval(const Interval& other)
	{
		minutes = other.minutes;
		seconds = other.seconds;
		cout << "Interval instance activated using copy constructor" << endl;
	}

	void operator=(const Interval& rhs)
	{
		minutes = rhs.minutes;
		seconds = rhs.seconds;
		cout << "Interval instance copied using assignment operator" << endl;
	}

	~Interval()
	{
		cout << "Interval instance deactivated" << endl;
	}

	void SetTime(long value) 
	{
		minutes = value / 60; 
		seconds = value % 60;
	}

	long GetTime() const
	{
		return 60 * minutes + seconds;
	}

	void Print() const
	{
		if(seconds < 10)
			cout << minutes << ":0" << seconds << endl;
		else
			cout << minutes << ":" << seconds << endl;
	}
private:
	long minutes;
	long seconds;
};

class Journey
{
public:
	Journey(float dis, const Interval& dur) : duration(dur)
	{
		distance = dis;
		//duration = dur;
		cout << "Journey instance activated" << endl;
	}

	float Speed() const
	{
		return 3.6 * distance / duration.GetTime();
	}
	
	~Journey()
	{
		cout << "Journey instance deactivated" << endl;
	}
	
private:
	float distance;
	Interval duration;
};

void Run(void)
{
	Interval t(2, 30);
	Journey j(600, t);
	cout << "Speed = " << j.Speed() << endl;
}

int main(void)
{
	/*
	Interval a(3, 20);
	Interval b = a; //Interval b(a)
	Interval c;
	c = a; //c.operator=(a)
	*/

	cout << "Journey begins..." << endl;
	Run();
	cout << "Journey ends." << endl;
}


#include <iostream>

using namespace std;

class Interval
{
public:
	explicit Interval(long m=0, long s=0)
	{
		minutes = m + s / 60;
		seconds = s % 60;
		cout << "Interval instance activated" << endl;
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

float Speed(float distance, const Interval& duration) 
{
	return 3.6 * distance / duration.GetTime();
}

int main(void)
{
	int n;
	cout << "Number of Intervals: ";
	cin >> n;

	Interval* list = new Interval[n]; //dynamically activating array of Interval instances, required default constructor

	for(int i = 0; i < n; ++i)
	{
		list[i].SetTime(35 * i + 75);
		list[i].Print();
	}

	delete[] list; //deactivating array of Interval instances
}


#include <iostream>

using namespace std;

class Interval
{
public:
	explicit Interval(long m=0, long s=0)
	{
		id = 0;
		minutes = m + s / 60;
		seconds = s % 60;
	}

	int GetId() const
	{
		static int nid = 1;

		if(id == 0)
			id = ++nid;

		return id;
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

	static const Interval* First()
	{
		static Interval f;
		f.id = 1;
		return &f;
	}
private:
	mutable int id; //can be assigned in a const method
	long minutes;
	long seconds;
};

void Show(const Interval& i) 
{
	cout << "Interval with ID " << i.GetId() << " is ";
	i.Print();
}

int main(void)
{
	Interval jack(3, 20);
	Show(jack);
	
	Interval jill(2, 30);
	Show(jill);

	const Interval* john = Interval::First();
	Interval* j = const_cast<Interval*>(john);
	j->SetTime(290);
	struct _Interval
	{
		int id;
		long minutes;
		long seconds;
	};
	_Interval* jj = reinterpret_cast<_Interval*>(j);
	jj->id = 10;
	Show(*john);
}


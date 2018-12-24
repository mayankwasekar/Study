#ifndef INTERVAL_H
#define INTERVAL_H

#include <iostream>

class Interval
{
public:
	explicit Interval(long m=0, long s=0)
	{
		min = m + s / 60;
		sec = s % 60;
	}

	long Minutes() const
	{
		return min;
	}

	long Seconds() const
	{
		return sec;
	}

	long Time() const
	{
		return 60 * min + sec;
	}
private:
	long min, sec;

	friend std::ostream& operator<<(std::ostream& out, const Interval& val);
};

std::ostream& operator<<(std::ostream& out, const Interval& val)
{
	if(val.sec < 10)
		out << val.min << ":0" << val.sec;
	else
		out << val.min << ":" << val.sec;
	return out;
}

#endif


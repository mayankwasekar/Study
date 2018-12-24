#include "interval.h"
#include <iostream>
#include <string>

using namespace std;

template<typename I, typename V>
class IndexedValue //IndexedValue class template
{
public:
	IndexedValue(const I& i, const V& v) : index(i), value(v)
	{
	}

	void Print() const
	{
		cout << index << " => " << value << endl;
	}
private:
	I index;
	V value;
};

int main(void)
{
	IndexedValue<string, double> a("first", 8.76); //activating instance of templated IndexedValue class for I=string, V=double
	a.Print();

	IndexedValue<int, string> b(1, "Monday");
	b.Print();

	IndexedValue<int, string> c(2, "Tuesday");
	c.Print();

	IndexedValue<int, Interval> d(3, Interval(2, 30));
	d.Print();
}


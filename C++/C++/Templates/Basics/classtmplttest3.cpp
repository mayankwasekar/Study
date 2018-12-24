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

int nid = 0;

template<>
class IndexedValue<int, bool> //full specialization of IndexedValue class template for I=int
{
public:
	IndexedValue(bool v) : value(v)
	{
		index = ++nid;
	}

	void Print() const
	{
		cout << "[" << index << "] => " << (value ? "true" : "false") << endl; 
	}
private:
	int index;
	bool value;
};

int main(void)
{
	IndexedValue<string, double> a("first", 8.76); 
	a.Print();

	IndexedValue<int, string> b(10, "Monday");
	b.Print();

	IndexedValue<int, bool> c(true);
	c.Print();

	IndexedValue<int, Interval> d(20, Interval(2, 30));
	d.Print();
}


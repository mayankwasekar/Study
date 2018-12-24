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

template<typename V>
class IndexedValue<int, V> //partial specialization of IndexedValue class template for I=int
{
public:
	IndexedValue(const V& v) : value(v)
	{
		index = ++nid;
	}

	void Print() const
	{
		cout << "[" << index << "] => " << value << endl; 
	}
private:
	int index;
	V value;
};

int main(void)
{
	IndexedValue<string, double> a("first", 8.76); 
	a.Print();

	IndexedValue<int, string> b("Monday");
	b.Print();

	IndexedValue<int, string> c("Tuesday");
	c.Print();

	IndexedValue<int, Interval> d(Interval(2, 30));
	d.Print();
}


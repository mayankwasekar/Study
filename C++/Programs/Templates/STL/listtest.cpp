#include "interval.h"
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<Interval> store;
	store.push_back(Interval(4, 21));
	store.push_back(Interval(7, 32));
	store.push_back(Interval(5, 13));
	store.push_back(Interval(6, 54));
	store.push_back(Interval(3, 45));
	store.push_front(Interval(2, 30));

	for(list<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << "\t" << i->Time() << endl;

	//list<Interval>::iterator j = store.begin();
	//cout << "Third Interval = " << j[2] << endl;
}

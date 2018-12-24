#include "interval.h"
#include <iostream>
#include <set> 
#include <functional>
#include <utility>

using namespace std;
using rel_ops::operator>;

int main(void)
{
	//set<Interval> store;
	set<Interval, greater<Interval> > store;
	store.insert(Interval(4, 21));
	store.insert(Interval(7, 32));
	store.insert(Interval(5, 13));
	store.insert(Interval(6, 54));
	store.insert(Interval(3, 45));
	store.insert(Interval(2, 141));

	for(set<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << "\t" << i->Time() << endl;

}

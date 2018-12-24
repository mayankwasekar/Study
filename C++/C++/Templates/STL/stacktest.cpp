#include "interval.h"
#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

int main(void)
{
	//stack<Interval> store;
	stack<Interval, list<Interval> > store;
	store.push(Interval(4, 21));
	store.push(Interval(7, 32));
	store.push(Interval(5, 13));
	store.push(Interval(6, 54));
	store.push(Interval(3, 45));
	
	while(!store.empty())
	{
		cout << store.top() << endl;
		store.pop();
	}
}


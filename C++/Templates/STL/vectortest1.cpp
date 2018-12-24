#include "interval.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<Interval> store;
	store.push_back(Interval(4, 21));
	store.push_back(Interval(7, 32));
	store.push_back(Interval(5, 13));
	store.push_back(Interval(6, 54));
	store.push_back(Interval(3, 45));

	for(int i = 0; i < store.size(); ++i)
		cout << store[i] << "\t" << store[i].Time() << endl;
}

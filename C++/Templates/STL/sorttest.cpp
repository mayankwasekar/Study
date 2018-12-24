#include "interval.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;
using rel_ops::operator>;

int main(void)
{
	vector<Interval> store;
	store.push_back(Interval(4, 21));
	store.push_back(Interval(7, 32));
	store.push_back(Interval(5, 13));
	store.push_back(Interval(6, 54));
	store.push_back(Interval(3, 45));

	//sort(store.begin(), store.end());
	sort(store.begin(), store.end(), greater<Interval>());

	for(vector<Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << *i << endl;

}

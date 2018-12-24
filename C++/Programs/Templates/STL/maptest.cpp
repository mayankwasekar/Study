#include "interval.h"
#include <iostream>
#include <string>
#include <map> 

using namespace std;

int main(void)
{
	map<string, Interval> store;
	store.insert(make_pair("monday", Interval(4, 21)));
	store.insert(make_pair("tuesday", Interval(7, 32)));
	store.insert(make_pair("wednesday", Interval(5, 13)));
	store.insert(make_pair("thursday", Interval(6, 54)));
	store.insert(make_pair("friday", Interval(3, 45)));
	store.insert(make_pair("monday", Interval(2, 30)));

	for(map<string, Interval>::iterator i = store.begin(); i != store.end(); ++i)
		cout << i->second << "\t" << i->first << endl;

	string key;
	cout << "Key: ";
	cin >> key;

	map<string, Interval>::iterator j = store.find(key);
	if(j != store.end())
		cout << "Value = " << j->second << endl;
	else
		cout << "Key not found!" << endl;
	

}

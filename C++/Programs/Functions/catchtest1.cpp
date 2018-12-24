#include <iostream>
#include <string>

using namespace std;

struct BadName
{
};

int Search(string entry, string entries[], int count)
{
	if(entry.size() < 4)
	{
		BadName e;
		throw e;
	}

	for(int i = 0; i < count; ++i)
	{
		if(entries[i] == entry)
			return i;
	}

	throw entry;
}

void Run(void)
{
	string names[] = {"jack", "jill", "john", "jane"};
	long balances[] = {3000, 14000, 12000, 8000};

	string name;
	cout << "Name: ";
	cin >> name;

	try
	{	
		int i = Search(name, names, 4);
		cout << "Balance = " << balances[i] << endl;
	}
	catch(string s)
	{
		cout << "No such name - " << s << endl;
	}
	catch(BadName)
	{
		cout << "Name too small!" << endl;
	}
}

int main(void)
{
	cout << "Welcome to our bank..." << endl;
	Run();
	cout << "Goodbye." << endl;

}


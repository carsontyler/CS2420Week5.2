// Week5.2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <list>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::list;


int main()
{
	list<int> d;
	d.push_back(9);
	d.push_back(9);
	d.push_back(4);
	d.push_back(2);
	d.push_back(9);
	d.push_back(9);
	d.push_back(5);
	d.push_back(1);
	d.push_back(9);
	d.push_back(2);
	d.push_back(9);
	d.push_back(9);
    
	auto newEndIter = std::remove(d.begin(), d.end(), 9);
	for (auto iter = d.begin(); iter != newEndIter; ++iter)
		cout << *iter << " "; 
	cout << endl;
	
	std::for_each(d.begin(), newEndIter, [](int i) { cout << i << " "; });
	cout << endl;
	
	for (int item : d)
		cout << item << " ";
	cout << endl;

	cin.get();
	return 0;
}


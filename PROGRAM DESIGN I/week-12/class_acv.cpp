#include <iostream>

using namespace std;

int main()
{
	int stock[] = {0, 3, 2, 5, 1};

	cout << "x1 -> stock: "	<< stock[1] << "\n";
	cout << "x2 -> stock: "	<< stock[2] << "\n";
	cout << "x3 -> stock: "	<< stock[3] << "\n";
	cout << "x4 -> stock: "	<< stock[4] << "\n";

	int item;
	cout << "select item 1,2,3 or 4: ";
	cin >> item;

	if(stock[item] > 0)
	{
		cout << "purchase successful";
		stock[item]--;
		cout << "x1 -> stock: "	<< stock[1] << "\n";
		cout << "x2 -> stock: "	<< stock[2] << "\n";
		cout << "x3 -> stock: "	<< stock[3] << "\n";
		cout << "x4 -> stock: "	<< stock[4] << "\n";
	}


	return 0;
}

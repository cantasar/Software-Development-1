#include <iostream>

using namespace std;

int main()
{
	int stock[] = {0, 3, 2, 5, 1};

	cout << "x1 -> stock: "	<< stock[1] << "\n";
	cout << "x2 -> stock: "	<< stock[2] << "\n";
	cout << "x3 -> stock: "	<< stock[3] << "\n";
	cout << "x4 -> stock: "	<< stock[4] << "\n";

	int status;
	cout << "\n0 for client panel\n";
	cout << "1 for admin panel\n";
	cin >> status;

	switch (status)
	{
	case 0:
		int item;
		cout << "select item 1,2,3 or 4: ";
		cin >> item;

		if(stock[item] > 0)
		{
			cout << "purchase successful\n";
			stock[item]--;
			cout << "x1 -> stock: "	<< stock[1] << "\n";
			cout << "x2 -> stock: "	<< stock[2] << "\n";
			cout << "x3 -> stock: "	<< stock[3] << "\n";
			cout << "x4 -> stock: "	<< stock[4] << "\n";
		}
		break;
	
	case 1:
		int item1;
		cout << "select item 1,2,3 or 4: ";
		cin >> item1;

		int item_add;
		cout  <<"How many items do you want to add: ";
		cin >> item_add;

		stock[item1] += item_add;

		cout << item_add << " item added\n";
		cout << "x1 -> stock: "	<< stock[1] << "\n";
		cout << "x2 -> stock: "	<< stock[2] << "\n";
		cout << "x3 -> stock: "	<< stock[3] << "\n";
		cout << "x4 -> stock: "	<< stock[4] << "\n";
		break;
	
	default:
		break;
	}


	return 0;
}

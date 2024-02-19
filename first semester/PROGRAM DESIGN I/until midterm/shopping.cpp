#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int money;
	int item;
	int count;
	int total;
	int per_item;
	cout << "Products\n 1-Book 20$\n 2-Pen 10$\n 3-Pencil 20$\n";
	cout << "HOw much money you have: ";
	cin >> money;
	cout << "select item number and type count: ";
	cin >> item;
	cin >> count;
	switch (item)
	{
	case 1:
		per_item = 20;
		break;
	case 2:
		per_item = 10;
		break;
	case 3:
		per_item = 20;
		break;
	default:
		break;
	}
	total = per_item*count;
	cout << "total= \n" << total;
	if (total <= money)
	{
		cout << "Order Succesfull";
	}else
		cout << "Order denied";

	
	return 0;
}

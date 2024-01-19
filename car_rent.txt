#include <iostream>

using namespace std;

int main()
{
	int car_stock[] = {1, 1};
	int c1_not_avlb_days[] = {0, 0};
	int c2_not_avlb_days[] = {0, 0};

	int cont = 1;
	while (cont != -1)
	{
		int car, start, end;
		cout << "Select a car:\n1-BMW\n2-Mercedes Benz\n";
		cin >> car;

		cout << "Select start day in december: ";
		cin >> start;
		cout << "Select end day in december: ";
		cin >> end;

		if (car == 1 && c1_not_avlb_days[0] != 0 && start < c1_not_avlb_days[1] && start > c1_not_avlb_days[0])
			cout << "car not avilable\n";
		else
		{
			c1_not_avlb_days[0] = start;
			c1_not_avlb_days[1] = end;
		}
		if (car == 2 && c2_not_avlb_days[0] != 0 && start < c2_not_avlb_days[1] && start > c2_not_avlb_days[0])
			cout << "car not avilable\n";
		else
		{
			c2_not_avlb_days[0] = start;
			c2_not_avlb_days[1] = end;
		}
		


		cout << "do you want countinue (leave: -1): ";
		cin >> cont;
	}
	

	return 0;
}

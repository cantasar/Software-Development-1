#include <iostream>

using namespace std;

int main()
{
	int arr[10] = {0};

	cout << "enter 10 marks\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "student " << i << " : ";
		cin >> arr[i];
	}

	int avr = 0;

	for (int i = 0; i < 10; i++)
		avr += arr[i];
	avr = avr/10;

	cout << "\n" << "average: " << avr << "\n";

	for (int i = 0; i <= 10; i++)
	{
		if (arr[i] >= avr)
			cout << "student " << i << " passed\n";
		else
			cout << "student " << i << " failed\n";
	}

	return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand (time(NULL));
	int p1[10] = {0};
	int p2[10] = {0};

	cout << "1 paper\n2 rock\n3 scissors\n";

	for (int i = 0; i < 10; i++)
	{
		p2[i] = 1 + rand() % 3;
		cout << "enter 1,2 or 3: ";
		cin >> p1[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if((p1[i] == 1) && (p2[i] == 2))
			cout << "player win";
	}

	return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	srand (time(NULL));

		for (size_t i = 0; i < 20; i++)
		{
			int rand1 = 1 + rand() % 6;
			cout << "random1: " << rand1 << "\n";
			for (size_t i = 0; i < 20; i++)
			{
				int rand2 = 1 + rand() % 6;
				cout << "random2: " << rand2 << "\n";
				if (rand1 == rand2)
				{
					cout << "random1 is equal to random2\n";
					cout << "Connection succesfull\n";
					return 0;
				}
			}
		}
	
	
	
	return 0;
}

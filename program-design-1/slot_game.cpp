#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand (time(NULL));

	for (size_t i = 0; i < 20; i++)
	{
		int s1 = rand() % 3;
		int s2 = rand() % 3;
		int s3 = rand() % 3;

		cout << s1 << " " << s2 << " " << s3 << "\n";

		if ((s1 == s2) && (s1 == s3))
		{
			cout << "You WIN\n";
			return 0;
		}
	}
	
	
	
	
	return 0;
}

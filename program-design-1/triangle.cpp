#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;
	cout << "3 line: \n";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a+b)>c)
		printf("triangle \n");
	else
		printf("not triangle \n");
	
	return 0;
}

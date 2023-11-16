#include <iostream>

using namespace std;

void area(int r)
{
	cout << "area of cube: " << 6*r*r << "\n";
	cout << "area of circle: " << 3*r*r << "\n";
}

int main(int argc, char const *argv[])
{
	int r;
	cout << "r = ";
	cin >> r;
	cout << "\n";
	area(r);

	return 0;
}

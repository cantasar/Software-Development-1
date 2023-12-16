#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,d, avr;
	cout << "4 marks enter: \n";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	avr = (a+b+c+d)/4;
	if (avr>=90)
		cout << avr << " is AA"; 
	else if (avr>=80)
		cout << avr << " is BB"; 
	else if (avr>=70)
		cout << avr << " is CC"; 
	else if (avr>=60)
		cout << avr << " is DD"; 
	else
		cout << avr << " is FF"; 
	return 0;
}

#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int weight, height;
	float bmi;
	cout << "enter your weight(kg)\n";
	cin >> weight;
	cout << "enter your height(cm)\n";
	cin >> height;

	bmi = weight/((height/100)*(height/100));
	
	if (bmi>=30)
		cout << bmi <<  " very overweight";
	else if (bmi>=25)
		cout << bmi <<  " overweight";
	else if (bmi>=18.5)
		cout << bmi <<  " normal";
	else if (bmi<=18.5)
		cout << bmi << " under overweight";
	
	return 0;
}

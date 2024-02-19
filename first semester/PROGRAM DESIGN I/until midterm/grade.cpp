#include <iostream>

using namespace std;

int get_lec(void)
{
	int avr;
	int quiz, mid, final;
	cout << "quiz: ";
	cin >> quiz;
	cout << "\n";
	cout << "midterm: ";
	cin >> mid;
	cout << "\n";
	cout << "final: ";
	cin >> final;
	cout << "\n";

	avr = (quiz + mid + final)/3;
	return (avr);
}

int main(int argc, char const *argv[])
{
	int math_lec;
	int cpp_lec;
	math_lec = get_lec
	return 0;
}

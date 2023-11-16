#include <iostream>

using namespace std;

int get_lec(void)
{
	int avr;
	int quiz, mid, final;
	cout << "quiz: ";
	cin >> quiz;
	cout << "midterm: ";
	cin >> mid;
	cout << "final: ";
	cin >> final;

	avr = (quiz + mid + final)/3;
	cout << "Lecture Avr: " << avr << "\n\n";
	return (avr);
}

int main(int argc, char const *argv[])
{
	int math_lec;
	int cpp_lec;
	cout << "Math Lecture grades: \n";
	math_lec = get_lec();
	cout << "Cpp Lecture grades: \n";
	cpp_lec = get_lec();
	cout << "Total average is " << (math_lec+cpp_lec)/2 << "\n";
	if ((math_lec+cpp_lec)/2 <= 50)
	{
		cout << "Failed\n";
	}else
		cout << "Success\n";
	
	return 0;
}

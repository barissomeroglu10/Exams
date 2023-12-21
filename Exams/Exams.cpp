/*
İn this code we will get two result for the exams. And one exam has 40 percent value and other exam has
60 percent value. We will make a calculation about average and if average fits some condition, we will
write something on screen about it. And also if average does not fit any condition, we will write something on screen about it.

Developer: Barış Someroğlu
Date: 21.12.23 / 2 p.m.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	double Vize, Final, Ortalama = 0;

	cout << "Please Enter your 'Vize' note: ";
	cin >> Vize;

	cout << "\n";

	cout << "Please Enter your 'Final' note: ";
	cin >> Final;

	Ortalama = (Vize * 0.4) + (Final * 0.6);

	if (Ortalama >= 50 && Final >= 45)
	{
		cout << "\n";

		cout << "You Passed the Exam";
	}

	else {
		cout << "You Failed for the Exam" << endl;
	}

	return 0;
}
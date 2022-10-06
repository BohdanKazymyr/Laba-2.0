// Lab_02.cpp
// < Ęŕçčěčđţ Á,Ď >
// Ëŕáîđŕňîđíŕ đîáîňŕ š 2.
// Ëłíłéíł ďđîăđŕěč.
// Âŕđłŕíň 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // ÷čńëî ďł
	double a; // âőłäíčé ďŕđŕěĺňđ
	double z1; // đĺçóëüňŕň îá÷čńëĺíí˙ 1-ăî âčđŕçó
	//double z2; // đĺçóëüňŕň îá÷čńëĺíí˙ 2-ăî âčđŕçó
	cout << "a = "; cin >> a;
	z1 = sin(Pi * 0.5 + 3 * a) / (1 - sin(3 * a - Pi));
	//z2 = 1 / tan((1.25 * Pi) + (1.5 * a));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl; 
	cin.get();
	return 0;
}


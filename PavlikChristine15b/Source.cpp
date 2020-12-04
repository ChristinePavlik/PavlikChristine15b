/*
Christine Pavlik
December 6
CIS 1202 501
*/
#include <iostream>
#include <cmath>
using namespace std;
//This is for the doubles and floats
template <class T>
T half(T number) {
	return number / 2;
}
//This is for ints
template <>
int half(int number) {
	float num = static_cast<float>(number);
	num = num / 2.0;
	num = round(num);
	number = static_cast<int>(num);
	return number;
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}
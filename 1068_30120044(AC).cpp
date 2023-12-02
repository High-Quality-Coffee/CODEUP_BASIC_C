//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {

	int a;
	cin >> a;
		
	if (a >= 90 && a <= 100)cout << "A";
	else if (a >= 70 && a <= 89)cout << "B";
	else if (a >= 40 && a <= 69)cout << "C";
	else if (a >= 0 && a <= 39)cout << "D";
	return 0;

}

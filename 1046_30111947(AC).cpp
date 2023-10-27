#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {

	long long int a,b,c;
	cin >> a >> b >> c;

	cout << a + b + c << endl;
	cout.precision(1);
	cout << fixed;

	cout << (a + b + c)/3.0 << endl;



	return 0;

}

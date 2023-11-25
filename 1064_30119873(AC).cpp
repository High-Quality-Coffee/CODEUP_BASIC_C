//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {

	int a,b,c;
	cin >> a >> b >> c;
	
	cout << ((a < b ? a : b) < c ? (a < b ? a : b) : c);

	
	return 0;

}

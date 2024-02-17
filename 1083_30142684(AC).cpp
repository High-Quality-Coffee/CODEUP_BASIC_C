//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {	

	int a;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (i % 3 == 0)cout << "X ";
		else cout << i << " ";
	}

	return 0;

}

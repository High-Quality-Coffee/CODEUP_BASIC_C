//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {	

	int n;
	int sum = 0, i = 1;
	cin >> n;


	while (1) {
		sum += i;
		if (sum >= n)break;
		i++;
	}

	cout << i;

	return 0;

}

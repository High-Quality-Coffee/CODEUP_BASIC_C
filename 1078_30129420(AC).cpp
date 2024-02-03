//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {	

	int set = 0, sum = 0;
	int n;
	cin >> n;

	while (set<=n) {
		if (set % 2 == 0)sum += set;
		set++;
	}
	cout << sum;
	return 0;

}

//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c, day;
	cin >> a >> b >> c;
	
	day = 1;
	while (day%a != 0 || day % b != 0 || day % c != 0)day++;

	cout << day;

	return 0;

}

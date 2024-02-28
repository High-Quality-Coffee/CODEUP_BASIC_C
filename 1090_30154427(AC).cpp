//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	long long int a, r, n,t;

	cin >> a >> r >> n;
	t= a * pow(r, n - 1);
	cout << t;

	return 0;

}

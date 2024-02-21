//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	int n;
	cin >> n;

	for (int i = 1; sum < n; i++) {
		sum += i;

	}
	cout << sum;

	return 0;

}

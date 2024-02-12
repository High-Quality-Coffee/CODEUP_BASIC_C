//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {	

	int n,m;
	
	cin >> n >> m;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << i << " " << j << endl;
		}
	}

	return 0;

}

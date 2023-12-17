//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {
	char first = 'a';
	char  c;
	cin >> c;


	while (first<c+1) {
		cout<<first<<" ";
		first++;
	}

	return 0;

}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
//#include <stdio.h>
using namespace std;

int main() {
	string s;
	int length;
	getline(cin, s);
	length = s.length();

	for (int i = 0; i < length; i++) {
		cout << "'" << s[i] <<"'" << endl;
	}

	return 0;

}

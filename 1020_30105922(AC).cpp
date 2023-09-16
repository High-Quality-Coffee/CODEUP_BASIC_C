#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
#include <stdio.h>
///using namespace std;

int main() {
	int first,second;

	scanf("%d-%d", &first,&second);
	if (first / 100000 >= 1) {
		printf("%d%d", first, second);
	}

	else if (first % 100000 < 100000 && first % 100000 >= 10000) {
		printf("0");
		printf("%d%d", first, second);
	}

	else if (first % 100000 < 10000 && first % 100000 >= 1000) {
		printf("00");
		printf("%d%d", first, second);
	}

	else if (first % 100000 < 1000 && first % 100000 >= 100) {
		printf("000");
		printf("%d%d", first, second);
	}


	return 0;

}

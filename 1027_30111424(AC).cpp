﻿#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <string>
#include <stdio.h>
//#include <math.h>
using namespace std;

int main() {
	int y, m, d;
	scanf("%d.%d.%d",&y,&m,&d);
	printf("%02d-%02d-%04d", d,m,y);

	return 0;

}

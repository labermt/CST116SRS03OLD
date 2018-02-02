// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdio>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double a;
	double b;
	double c;
	double x;
	double x1;
	double x2;
	double d;

	
	std::cin >> a >> b >> c;
	printf("Enter the value : ");
	d = (b*b) - 4 * a*c;
	if (d == 0) {
		x = -b + (2 * a);
		printf("The roots are equal and they are x= %f", x);
	}
	else if (d > 0) {

		x1 = (-b + sqrt(d) / (2 * a));
		x2 = (-b - sqrt(d) / (2 * a));
		printf("The roots are x1=%f,\nx2=%f", x1, x2);
	}
	else {
		printf("The roots are Imagine!");

	}

	return 0;
}


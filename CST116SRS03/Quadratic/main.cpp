
// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>


int main()
{
	double a{};
	double b{};
	double c{};
	double dis(sqrt(b*b - 4 * a*c));
		double t1(-b + dis);
		double t2(-b - dis);
	double b1(2.0*a);
	assert(dis >= 0);
	std::cout << "Insert your quadtradic equation in the order of a, b, c" << std::endl;
	std::cin >> a >> b >> c;
	std::cout << "X = " << t1 / b1 << "or X = " << t2 / b1;

	return 0;
}
// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <assert.h>

using std::endl;

int main()
{
	double a, b, c;
	double discriminant, denominator;

	std::cout << "Enter value for a: ";
	std::cin >> a;

	std::cout << "Enter value for b: ";

	std::cin >> b;

	std::cout << "Enter value for c: ";
	std::cin >> c;

	discriminant = b * b - 4 * a * c;
	denominator = 2 * a;
	assert(discriminant >= 0);
	double root = (-b + sqrt(discriminant)) / denominator;


	/*displaying*/
	std::cout << root << endl;
	std::cout << -root << endl;

	return 0;
}


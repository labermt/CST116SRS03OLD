// part1.cpp : Defines the entry point for the console application

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cassert>



int main()
{

	double a;
	double b;
	double negativeb;
	double c;
	double radicand;
	double fourac;
	double bsquare;
	double topplus;
	double topminus;

	double x;
	double negativex;

	std::cout << "Provide numeric values for a, b and c (order respective and seperated by a space) of a quadratic equation" << '\n';
	std::cin >> a >> b >> c;
	std::cout << a << " " << b << " " << c << std::endl;
	negativeb = -b;


	//this is the code for -b +
	fourac = (a * c) * 4;
	bsquare = (b * b);
	radicand = bsquare - fourac;
	assert(radicand > 0);
	topplus = negativeb + sqrt(radicand);
	x = topplus / (2 * a);
	std::cout << x << '\n';


	//this is the code for -b -
	topminus = negativeb - sqrt(radicand);
	negativex = topminus / (2 * a);

	std::cout << "x = " << x << " or " << negativex << std::endl;



	return 0;
}


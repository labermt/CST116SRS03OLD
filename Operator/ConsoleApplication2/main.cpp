// ConsoleApplication2.cpp : Defines the entry point for the console application.
//Create a program named "Quadratic" that calculates the roots of a quadratic equation.
//Prompt the user for input of the values a, b, and c with a clear and concise prompt.
//Solve the quadratic equation and show both the roots.


#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	double a;
	double b;
	double c;
	
	std::cout << "\n";

	std::cout << "Enter any non 0 for a=";  std::cin >> a;

	std::cout << "\n";

	std::cout << "Enter number for b=";  std::cin >> b;

	std::cout << "\n";

	std::cout << "Enter number for c=";  std::cin >> c; std::cout << std::endl;

	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Quadratic Equation Solved for variables entered";
	std::cout << "\n";

	std::cout << "Answer=" << (-b + sqrt(b * b - 4 * a * c)) / (2 * a); 


    return 0;
}


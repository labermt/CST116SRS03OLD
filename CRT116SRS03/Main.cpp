// CRT116SRS03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>



int main()
{
	int i0;
	int i1;
	double d0;
	double d1;

	std::cout << "Enter a number for i0 "; std::cin >> i0;
	std::cout << "Enter a number for i1 "; std::cin >> i1;
	std::cout << "Enter a number for d0 "; std::cin >> d0;
	std::cout << "Enter a number for d1 "; std::cin >> d1;
	std::cout << "\n" << std::endl;

	std::cout << "i0 * i1 == " << std::left << i0 * i1 << std::endl;
	std::cout << "i0 * d0 == " << std::left << i0 * d0 << std::endl;
	std::cout << "d0 * d1 == " << std::left << d0 * d1 << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "i0 / i1 == " << std::left << i0 / i1 << std::endl;
	std::cout << "i0 / d0 == " << std::left << i0 / d0 << std::endl;
	std::cout << "d0 / d1 == " << std::left << d0 / d1 << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "d0 % d1 == " << std::left << i0 % i1 << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "i0 + i1 == " << i0 + i1 << std::endl;
	std::cout << "i0 + d0 == " << i0 + d0 << std::endl;
	std::cout << "d0 + d1 == " << d0 + d1 << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "i0 - i1 == " << std::left << i0 - i1 << std::endl;
	std::cout << "i0 - d0 == " << std::left << i0 - d0 << std::endl;
	std::cout << "d0 - d1 == " << std::left << d0 - d1 << std::endl;
	std::cout << "\n" << std::endl;

    return 0;
}


// CST116SRS03
// Part 0: Operator

#include "stdafx.h"
#include <iostream>
#include <iomanip>

 



int main()
{
	int i0, i1;
	double d0, d1;
	
	std::cin >> i0 >> i1 >> d0 >> d1;

	std::cout << "i0 + i1 == " << std::left << i0 + i1 << '\n';
	std::cout << "i0 + d0 == " << std::left << i0 + d0 << '\n';
	std::cout << "d0 + d1 == " << std::left << d0 + d1 << '\n';
	

	return 0;
}


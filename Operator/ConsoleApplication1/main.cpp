

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
	std::cout.setf(std::ios::right);
	int i0;
	int i1;
	double d0;
	double d1;


	std::cout << "Enter number for i0=";  std::cin >> i0;

	std::cout << "Enter number for i1=";  std::cin >> i1;   
	
	std::cout << "Enter number for d0=";  std::cin >> d0;   
	
	std::cout << "Enter number for d1=";  std::cin >> d1;
	std::cout << "\n"; 
 
	std::cout << " i0 * i1 == " << i0 * i1 << "\n";
	std::cout << " i0 * d0 == " << i0 * d0 << "\n";
	std::cout << " d0 * d1 == " << d0 * d1 << std::endl;

	std::cout << "\n";
	std::cout << "\n";

	std::cout << " i0 / i1 == " << i0 / i1 << "\n";
	std::cout << " i0 / d0 == " << i0 / d0 << "\n";
	std::cout << " d0 / d1 == " << d0 / d1 << std::endl;

	std::cout << "\n";
	std::cout << "\n";

	std::cout << " i0 + i1 == " << i0 + i1 << "\n"; 
	std::cout << " i0 + d0 == " << i0 + d0 << "\n";
	std::cout << " d0 + d1 == " << d0 + d1 << std::endl;

	std::cout << "\n";
	std::cout << "\n";

	std::cout << " i0 - i1 == " << i0 - i1 << "\n";
	std::cout << " i0 - i1 == " << i0 - i1 << "\n";
	std::cout << " d0 - d1 == " << d0 - d1 << std::endl;

	std::cout << "\n";
	std::cout << "\n"; 

	std::cout << " i0 % i1 == " << i0 % i1 << std::endl;
return 0;
}


// 
#include "stdafx.h"
#include <iostream>
#include <iomanip>



int main()
{
	int i0{}, i1{};
	double d0{}, d1{};

	std::cin >> i0;
	std::cin >> i1;
	std::cin >> d0;
	std::cin >> d1;
	

	int mult1 = i0 * i1;
	double mult2 = i0 * d0;
	double mult3 = d0 * d1;

	int div1 = i0 / i1;
	double div2 = i0 / d0;
	double div3 = d0 / d1;

	int mod = i0 % i1;

	int sum1 = i0 + i1;
	double sum2 = i0 + d0;
	double sum3 = d0 + d1;

	int quot1 = i0 - i1;
	double quot2 = i0 - d0;
	double quot3 = d0 - d1;


	std::cout << "i0 * i1 == " << mult1 << std::endl;
	std::cout << "i0 * d0 == " << mult2 << std::endl;
	std::cout << "d0 * d1 == " << mult3 << std::endl;
	std::cout << "i0 / i1 == " << div1 << std::endl;
	std::cout << "i0 / d0 == " << div2 << std::endl;
	std::cout << "d0 / d1 == " << div3 << std::endl;
	std::cout << "i0 % i1 == " << mod << std::endl;
	std::cout << "i0 + i1 == " << sum1 << std::endl;
	std::cout << "i0 + d0 == " << sum2 << std::endl;
	std::cout << "d0 + d1 == " << sum3 << std::endl;
	std::cout << "i0 - i1 == " << quot1 << std::endl;
	std::cout << "i0 - d0 == " << quot2 << std::endl;
	std::cout << "d0 - d1 == " << quot3 << std::endl;

	return 0;
}


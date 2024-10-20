#include "Euro.h"
#include<iostream>
float Euro::forexSwape(std::string cashType)
{
	if (cashType == this->cashType)
		return 1;
	else if (cashType == "$")
		return 1.10;
	else if (cashType == "MAD")
		return 11.0;
	else {
		std::cout << "undifined money in our system" << std::endl;
		return 0;
	}
		
}

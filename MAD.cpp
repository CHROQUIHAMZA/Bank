#include "MAD.h"

MAD::MAD(std::string cashType):Cash(cashType)
{
}

float MAD::forexSwape(std::string cashType)
{

	if (cashType == this->cashType)
		return 1;
	else if (cashType == "$")
		return 0.1;
	else if (cashType == "€")
		return 0.09;
	else {
		std::cout << "undifined money in our system" << std::endl;
		return 0;
	}
}

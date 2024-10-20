#include "Dollar.h"

float Dollar::forexSwape(std::string cashType)
{

	if (cashType == this->cashType)
		return 1;
	else if (cashType == "€")
		return 0.9;
	else if (cashType == "MAD")
		return 10.2;
	else {
		std::cout << "undifined money in our system" << std::endl;
		return 0;
	}
    
}

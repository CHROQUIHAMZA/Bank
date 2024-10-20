#include "Cash.h"
#include<iostream>
Cash::Cash(std::string cashType):cashType(cashType)
{
}

Cash::~Cash()
{
}

void Cash::display() const
{
	std::cout << this->cashType << std::endl;
}

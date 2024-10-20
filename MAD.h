#pragma once
#include<iostream>
#include"Cash.h"
class MAD:public Cash
{
public:
	MAD(std::string);
	float forexSwape(std::string cashType);

};


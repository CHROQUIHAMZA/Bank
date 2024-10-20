#pragma once
#include<iostream>
class Cash
{
protected:
	std::string cashType;
public:
	Cash(std::string cashType);
	~Cash();
	void display()const;


};


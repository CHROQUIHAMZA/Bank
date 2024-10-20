#include "Bank.h"
#include<iostream>
Bank::Bank(std::string bankName):nomBank(bankName)
{
}

Bank::~Bank()
{
}

void Bank::display() const
{
	std::cout << "BankName : " << this->nomBank << std::endl;
}

void Bank::updateName(std::string newBankName)
{
	this->nomBank = newBankName;
}

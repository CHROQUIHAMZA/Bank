#pragma once
#include<iostream>
#include"Cash.h"
#include<memory>

class Account
{
private:
	
	int id;
	std::string password;
	static int accRange;
	double solde;
	std::shared_ptr<Cash> cash;

public:

	Account(std::string Password,double solde, std::shared_ptr<Cash>C);
	~Account();
	void display() const;
	void updatePassword();
	void depot(double money);
	void retrait(double money);
	


};


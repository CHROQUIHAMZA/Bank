#pragma once
#include<iostream>
#include"Account.h"
#include<memory>
class Owner
{
private:
	int id ;
	std::string firstName;
	std::string lastName;
	static int ownerRang;
	std::shared_ptr<Account> Acc;
public:
	Owner(std::string firstName, std::string lastName);
	~Owner();
	void display() const;
	void CreateAccount(std::shared_ptr<Account> );
	

	
};


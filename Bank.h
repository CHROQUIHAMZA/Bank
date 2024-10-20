#pragma once
#include<iostream>
#include"Account.h"
#include<memory>
class Bank
{
private:
	std::string nomBank;
	std::shared_ptr<Account> Acc[50];
	

public:
	Bank(std::string);
	~Bank();
	void display()const;
	void updateName(std::string);
	void addAccount(std::shared_ptr<Account> C);

};


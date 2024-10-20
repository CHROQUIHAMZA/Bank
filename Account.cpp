#include "Account.h"
#include<iostream>
int Account::accRange = 0;
Account::Account(std::string Password, double solde, std::shared_ptr<Cash> C) :id(accRange++), password(Password), solde(solde), cash(std::move(C))
{
}

Account::~Account()
{
	accRange--;
}

void Account::display() const
{
	std::cout << "id : " << this->id  ;
	std::cout << "     password : " << this->password ;
	std::cout << "     Solde : " << this->solde <<" ";
	this->cash->display();


	

}

void Account::updatePassword()
{
	std::string password;
	do {
		std::cout << "Enter your old password : ";
		std::cin >> password;
	} while (password != this->password);
	do{
	std::cout << "Enter a new password : ";
	std::cin >> password;
	} while (password == "" || password == " ");
	this->password = password;
	std::cout << "Password updated" << std::endl;


}

void Account::depot(double money)
{
	this->solde += money;
}

void Account::retrait(double money)
{
	if (money > this->solde) {
		std::cout << "argent insuffisant" << std::endl;
		return;
	}
	this->solde -= money;
}

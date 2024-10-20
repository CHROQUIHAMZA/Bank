#include "Owner.h"
int Owner::ownerRang = 0;
Owner::Owner(std::string firstName, std::string lastName):id(ownerRang++),firstName(firstName),lastName(lastName),Acc(nullptr)
{
}

Owner::~Owner()
{
	ownerRang--;
	
}

void Owner::display() const
{
	std::cout << "-------------------------------User "<<this->id<<"-------------------------------- " << std::endl;
	std::cout << "\t\t\tFull Name : " << this->lastName <<" "<<this->firstName << std::endl;
	
	if (this->Acc) {
		std::cout << "\t-------------------Account Info------------------- " << std::endl;
		this->Acc->display();
	}


}

void Owner::CreateAccount(std::shared_ptr<Account> newAcc)
{
	this->Acc = std::move(newAcc);  
}


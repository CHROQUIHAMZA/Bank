// mainBank.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Bank.h"
#include"Account.h"
#include"Owner.h"
#include"MAD.h"
#include<memory>
int main()
{

    Owner O1("hamza", "chroqui");
    O1.display();
    std::shared_ptr<MAD> C = std::make_unique<MAD>("MAD");
    std::shared_ptr<Account> Acc = std::make_shared<Account>("hello", 120.0, C);
    O1.CreateAccount(Acc);
    Acc->depot(200 * C->forexSwape("$"));
    O1.display();
    Acc->retrait(100);
    O1.display();

    
   

    
}



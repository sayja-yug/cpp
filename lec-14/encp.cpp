#include <iostream>
using namespace std ;

class BankAccount{
    private :
        string accountNumber  ;
        double balance ;

        public :
        BankAccount(string accNum , double initialBalance){
            accountNumber = accNum ;
            balance = initialBalance ;
        }
//getter 
        double getBalance() const {
            return balance ;
        }

        //methisd to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance += amount ;
                cout << "Deposited amount : " << amount << endl ;
                cout << "New balance : " << balance << endl ;

            }else{
                cout << "invalid amount to deposit " << endl ;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount ;
                cout << "Withdrawn amount : " << amount << endl ;
                cout << "New balance : " << balance << endl ;
            }else{
                cout << "invalid amount to withdraw " << endl ;
            }



}

};

int main (){
    BankAccount myAccount("123456789", 1000.0);
    cout << "Initial balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    
    
    
    return 0 ;

}
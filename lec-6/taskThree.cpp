#include <iostream>
#include <string>
using namespace std ;

int main (){
   int cups ;

   double PricePerCup = 2.5 , totalPrice ,discount;

   cout << "enter the number of cups you want to purchase :"<< endl ;
    cin >> cups ;

    totalPrice = PricePerCup *cups ;

    if (cups > 20){
        discount = 0.20;

    }else if (cups >= 10 && cups <= 20){
        discount = 0.10;

    }else {
        discount = 0.0 ;
    }

    totalPrice -= (totalPrice * discount);

    
    cout << "your total price is : "<<totalPrice <<" with discount included "<< endl ;


    return 0 ;

}
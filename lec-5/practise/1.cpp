#include <iostream>

using namespace std ;

int main(){
    int noOfPacks;
    int pricePerPacks;
    cout << "enter the number of packs do you want to purchase :"<< endl ;
    cin >> noOfPacks ;

    cout << "enter the price per pack :"<< endl;
    cin >> pricePerPacks ;

    double totalPrice = noOfPacks * pricePerPacks ;
    totalPrice = totalPrice + totalPrice *0.1;

    cout << "your total price is : "<<totalPrice <<" with 10% tax included "<< endl ;

    return 0;



}
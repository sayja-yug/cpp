#include <iostream>
using namespace std ;

int* preparedChaiOrders(int cups) {
    int* orders = new int[cups] ; // dynamically allocate an array of size cups
    for(int i = 0 ; i < cups ; i++){
        orders[i] = (i + 1 ) * 10 ; // example preparation time for each cup
    }
    return orders ; // return the pointer to the dynamically allocated array
}

int main (){
    int cups = 5 ;
    int* chaiOrder = preparedChaiOrders(cups) ;
    for (int i=0 ; i<cups ; i++){
        cout  << "Chai order " << (i + 1) << " preparation time: " << chaiOrder[i] << " seconds" << endl ;
    }
    delete[] chaiOrder ; // free the dynamically allocated memory
   return 0;    

}    
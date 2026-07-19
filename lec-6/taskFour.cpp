#include <iostream>
#include <string>
using namespace std ;

int main (){
    int choice ;
    double  price ;
    cout << "enter your choice of tea : \n";
    cout << "1.Green Tea \n";
    cout << "2.Lemon Tea \n";
    cout << "3.Oolong Tea \n";
    cout << "enter your choice :"<< endl ;
    cin >> choice ;

    switch(choice){
        case 1 :
            price = 2.0;
            cout << "you selected Green Tea and your price is :"<< price << endl ;
            break ; 
        case 2 :
            price = 1.5;
            cout << "you selected Lemon Tea and your price is :"<< price << endl ;
            break;
        case 3 :
            price = 3.0;
            cout << "you selected Oolong Tea and your price is :"<< price << endl ;
            break;
        default :
            cout << "invalid choice "<< endl ;
            break ;
    }
    
    
    
    
    return 0 ;

}
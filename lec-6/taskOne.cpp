#include <iostream>
#include <string>
using namespace std ;

int main (){
    string teaOrder;
    cout << "enter your tea order :"<< endl ;
    getline(cin , teaOrder);

    if(teaOrder =="Green Tea"){
        cout << "your order is confirmed :"<< teaOrder << endl ;

    }


    
    
    
    
    return 0 ;

}
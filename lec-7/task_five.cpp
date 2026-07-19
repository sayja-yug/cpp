#include <iostream>
#include <string>
using namespace std ;

int main(){
    string teaTypes[4] = {"lemon tea","green tea" , "black tea" , "herbal tea"} ;
    for (int i =0 ;i < 4 ;i++){
        if (teaTypes[i] =="green tea"){
            cout <<"skpping "<<teaTypes[i]<<"..."<<endl;
            continue;
        }
        cout << "brewing "<< teaTypes[i]<<"..."<<endl;

    }

    return 0 ;





}
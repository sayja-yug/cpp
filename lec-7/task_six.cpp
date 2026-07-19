#include <iostream>
#include <string>
using namespace std ;

int main(){
    string teaTypes[4] = {"lemon tea","green tea" , "black tea" , "herbal tea"} ;
    for (int i = 0 ;i < 4 ;i++){
        cout << "brewing "<< teaTypes[i]<<"..."<<endl;
        for (int j = 1 ;j <= 3;j++){
            cout <<"brewing "<< teaTypes[i]<<" cup "<<j<<"..."<<endl;
        }
    }

    return 0 ;





}
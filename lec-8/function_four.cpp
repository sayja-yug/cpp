#include <iostream>

using namespace std ;

int main(){

//lamda
    auto preparedChai = [](int cups ){
        cout << "preparing " << cups << " cups of chai" << endl ; 
    };
    preparedChai(3);



    return 0 ;

}
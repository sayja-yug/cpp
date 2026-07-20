#include <iostream>
#include <string>
using namespace std ;

int main(){
    int teaCups ;
    cout << "Enter the number of tea cups you want to order: ";
    cin >> teaCups;

    for(int i = 1 ;i <= teaCups ; i++){
        cout << "brewing a cup of tea \n" << i << " and  " << teaCups - i<< " cups left to serve \n"<< endl;

    }
    
    cout << "outside the loop" << endl;
    return 0;
}
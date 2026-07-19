#include <iostream>

using namespace std ;

int main(){
    int noOfBags ;
    cout << "enter the number of bags do you have :"<< endl;
    cin >> noOfBags;

    if (noOfBags < 20 ){
        noOfBags +=10 ;
    }else {
        cout << "Do not add any extra bags "<< endl ;
    }

    cout << "your total updated bags are :"<< noOfBags << endl ;
    
    
    
    
    return 0 ;

}
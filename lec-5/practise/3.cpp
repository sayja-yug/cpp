#include <iostream>

using namespace std ;

int main (){
    bool member;
    int noOfCups;

    cout << "are you a member of our club for past 1 year ? (1 for yes and 0 for no) :"<< endl ;
    cin >> member ;

    cout << "enter the number of cups you want to purchase :"<< endl ;
    cin >> noOfCups ;

    if (member == 1 || noOfCups > 12){
        cout << "you are eligible for 10% discount on your purchase "<< endl ;

    }else {
        cout <<" your are not eligible for any discount on your purchase "<< endl ;

    }
    return 0;

}
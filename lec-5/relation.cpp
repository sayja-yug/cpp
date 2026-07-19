#include <iostream>

using namespace std;

int main(){
    int cups ;
    cout << "enter the number of cups you have :"<< endl ;
    cin >> cups ;

    if (cups > 20){
        cout << "you will get a GOLD badge " << endl ;

        
    }else if (cups >= 10 && cups <= 20){
        cout << "you will get a SILVER badge " << endl ;

    }else {
        cout << "NO BADGE for you  " << endl ;
    }
    return 0;
    
}


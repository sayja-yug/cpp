#include <iostream>
#include <string>
using namespace std ;

int main(){
    string respone ;

    do {
        cout << "do you want to continue (y/n) : ";
        getline(cin ,respone);

    } while(respone != "no" && respone != "No");


}
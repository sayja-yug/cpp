#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "what would you like to order in tea ?\n";
    getline(cin , userTea);

    cout << "how many cups of " << userTea << "would you like to order ?\n";
    cin >> teaQuantity ;
   
    cout <<teaQuantity ;
    cout << userTea ;


 

    return 0;

}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "what would you like to your favorite  tea ?\n";
    getline(cin , userTea);

    cout << "how many cups of " << userTea << "would you like to order ?\n";
    cin >> teaQuantity ;
   
   

    cout << "this is your favorite tea "<< userTea << " and the quantity of that tea is "<< teaQuantity << endl;

 

    return 0;

}

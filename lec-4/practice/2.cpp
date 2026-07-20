#include <iostream>


using namespace std;

int main(){
    int teaLeavesPrice;

    
    cout <<" write the base price of your tea leaves " <<endl ;
    cin >> teaLeavesPrice ;

    double totalPrice = (teaLeavesPrice *0.1) + teaLeavesPrice ;
    int roundedPrice = (int) totalPrice;

    cout << "the total price of your tea leaves is "<< teaLeavesPrice << " + 10% tax = " << totalPrice << " and the rounded price is "<< roundedPrice << endl;
    
    
    return 0;
    



}

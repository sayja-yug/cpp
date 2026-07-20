// question 1 
#include <iostream>
#include <string>

using namespace std ;

int main(){
    string typeOfTea;
    float priceOfTea;
    char teaRating;

    cout << " what type of tea do you prefer to drink ?\n";
    getline(cin ,typeOfTea);

    cout << "what is the price of "<< typeOfTea << " per kilogram ?\n";

    cin >> priceOfTea;
    cout << "what is the rating of this "<< typeOfTea << " ?\n";
    cin >> teaRating;

    cout << "your preffered tea is "<<typeOfTea << " and the price of that tea is $"<< priceOfTea << " and  the rating of that tea is "<< teaRating << endl;
    
    return 0;

    



}
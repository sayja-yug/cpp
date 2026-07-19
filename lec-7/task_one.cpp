#include <iostream>

using namespace std ;

int main(){
    int teaCups;
    cout << "Enter the number of tea cups you want to order: ";
    cin >> teaCups;

    //while loop 
    while (teaCups > 0){
        cout << "serving a cup of tea \n" << teaCups << " cups left to serve \n"<< endl;
        teaCups --;


    }
    cout << "all cups are served "<<endl;
    
    
    
    return 0;

}
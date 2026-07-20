#include <iostream>
using namespace std ;

int totalChaiServed(int chai[],int size ){
    int total = 0 ;
    for(int i = 0 ; i < size ; i++){
        total += chai[i] ;
    }
    return total ;

}


int main (){
   
    int chaiServed[7] = {34,22,43,44,41,76, 90} ;

    int total_new = totalChaiServed(chaiServed,7) ;
    cout << "Total chai served in 7 days is " << total_new << endl ;
    return 0;

}
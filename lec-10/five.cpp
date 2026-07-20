#include <iostream>
using namespace std ;



int main (){
    int chaiSales[3][7] ={
        {34,22,43,44,41,76,90},
        {12,23,34,45,56,67,78},
        {11,22,33,44,55,66,77}
    };
    for ( int i= 0 ; i<3 ; i++){
        cout << "Sales for shop " << (i + 1) << endl ;
        for (int j =0 ; j < 7 ; j++){
            cout << "Day " << (j + 1) << ": " << chaiSales[i][j] << endl ;
        }
    }
    return 0;

}
// returnType functionName(parameter) {
//     //function body a
    
// }
#include <iostream>
using namespace std ;

int checkTemperature(int temperature){
    return temperature ;    
}

// declaration of function 
void serveChai(int cups);

void makeChai(){
    cout << "boiling water ,adding tea leaves ,stranning ...";
}

void serveChai(string teaType = "masala tea" ){
    int cups = 2;
    cout << "serving " << teaType << " chai" << endl;
}

void serveChai(int cups , int teaLeaves){
    
  
}

int main (){
    int temp = checkTemperature(85);
    cout << "The temperature is: " << temp << endl;
    // makeChai();
    // serveChai(3);
    serveChai();
    return 0;

}
//defination of fuction 
void serveChai(int cups){
    cout <<"serving "<< cups << " of chai ";

}

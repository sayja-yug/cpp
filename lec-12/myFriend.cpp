#include <iostream>
#include <vector>
#include <string >

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
    public:
        Chai(string name , int serve) :teaName(name),servings(serve){}

        friend bool compareServings(const Chai &chai1, const Chai &chai2);


        void display () const {
             cout << "teaname: "<< teaName << endl;
             cout << "servings: "<< servings << endl;
        }
          
        };

bool compareServings (const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}


int main(){
    Chai masalaChai("masala chai", 2);
    Chai gingerChai("ginger chai", 3);
     
    gingerChai.display();
    masalaChai.display();

    if (compareServings(gingerChai, masalaChai)){
        cout  << "Ginger chai has more servings than masala chai." << endl;

    }else{
        cout << "Masala chai has more servings than ginger chai." << endl;
    }



}

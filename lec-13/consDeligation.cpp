#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
    string teaName;
        int servings;
        vector<string> ingredients;
// deligation constructor
Chai(string name ): Chai(name , 1 , {"water "," tea leaves "}) {
        cout << "Delegation constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;
    }





    //main constructor
    Chai(string name, int serve, vector<string> ingre) {
        teaName = name;
        servings = serve;   
     
        ingredients = ingre;

        cout << "Main constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;
    }

    void displayChaiDetails() const {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";

        for (const string& ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};



int main(){
    Chai quickChai("quick chai");
    quickChai.displayChaiDetails();
    return 0;   
}
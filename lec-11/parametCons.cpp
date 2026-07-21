#include <iostream>
#include <vector>

using namespace std ;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
// paramter wise constructor

    Chai(string name , int serve , vector<string> ingre){
        teaName = name ;
        servings = serve ;
        ingredients = ingre;
        cout << "Parameterized constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;
    }


    void displayChaiDetails()
        {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";

        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main(){
    Chai lemonTea("lemon Tea ", 2 , {"water "," tea leaves "," lemon "});
    lemonTea.displayChaiDetails();

   


    return 0 ;
}

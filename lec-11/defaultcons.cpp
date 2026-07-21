#include <iostream>
#include <vector>

using namespace std ;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    Chai(){
        teaName = " unknown tea ";
        servings = 1 ;
        ingredients = {"water "," tea leaves "};
        cout << "Default constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;
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
    Chai defaultChai;
    defaultChai.displayChaiDetails();

    return 0 ;
}

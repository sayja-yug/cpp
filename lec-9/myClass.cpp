#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    // data member (attributes )
    string teaName;             // name of the tea
    int servings;               // no of serving
    vector<string> ingredients; // list of ingredients
    // member funcction (behaviour)

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";

        for (string ingridient : ingredients)
        {
            cout << ingridient << " ";
        }
        cout << endl;
    }

};

int main()
{
    Chai chaiOne;
    chaiOne.teaName = "Green Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Green Tea Leaves", "Water", "Honey"};
    chaiOne.displayChaiDetails();

    Chai chaiTwo;
    chaiTwo.teaName = "Masala Tea";
    chaiTwo.servings = 3;   
    chaiTwo.ingredients = {"Black Tea Leaves", "Water", "Milk", "Spices"};
    chaiTwo.displayChaiDetails();

    return 0;
}

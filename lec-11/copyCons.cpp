#include <iostream>
#include <vector>

using namespace std ;

class Chai{
public:
    string* teaName;
    int servings;
    vector<string> ingredients;
// paramter wise constructor

    Chai(string name , int serve , vector<string> ingre){
        teaName = new string(name) ;
        servings = serve ;
        ingredients = ingre;
        cout << "Parameterized constructor called. Tea Name: " << *teaName << ", Servings: " << servings << endl;
    }

    Chai(const Chai& other){
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy constructor called. Tea Name: " << *teaName << ", Servings: " << servings << endl;
    }

    ~Chai(){
        delete teaName ;
        cout << "Destructor called for Tea Name: " << *teaName << endl;
    }


    void displayChaiDetails()
        {
        cout << "Tea Name: " << *teaName << endl;
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
    //lemonTea.displayChaiDetails();

     //copy the object 
    Chai copiedChai = lemonTea ;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "modified lemon Tea" ;
    cout << "After modifying the original object:------------------------" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied object details:-----------------------------" << endl;
    copiedChai.displayChaiDetails();

    return 0 ;
}

#include <iostream>
#include <vector>

using namespace std ;

class Chai{
    private :
        string teaName;
        int servings ;
        vector<string> ingredients;
    public:
        Chai(){
            teaName =" unknown tea ";
            servings = 1 ;
            ingredients = {"water "," tea leaves "};
        }

        Chai(string name , int serve , vector<string> ingre) {
            teaName = name;
            servings = serve;   
            ingredients = ingre;
        }

        //getter 
        string getTeaName() const {
            return teaName;
        }

        //setter 
        void setTeaName(string name) {
            //logic 
            teaName = name;
        }
        //getter for serving 
        int getServings() const {
            return servings;
        }

        //setter for serving
        void setServings(int serve) {
            //logic 
            servings = serve;
        }

        //getter for ingredients
        vector<string> getIngredients() const {
            return ingredients;
        }

        //setter for ingredients
        void setIngredients(vector<string> ingre) {     
            //logic 
            ingredients = ingre;
        }

        void displayChaiDetails() const {
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";

            for (string ingredient : ingredients) {
                cout << ingredient << " ";
            }
            cout << endl;
        }
};

int main(){
    Chai chai ;
    chai.getTeaName();
    chai.setTeaName("Masala Chai");
    chai.setServings(2);
    chai.setIngredients({"water", "tea leaves", "spices"});
    chai.displayChaiDetails();

    
    
    
    
    
    return 0 ;

}
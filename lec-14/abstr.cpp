#include <iostream>
#include <string>

using namespace std ;   


class Tea{
public:
    
    virtual void prepareIngredients()=0 ; // pure virtual function
    virtual void brew()=0 ; // pure virtual function
    virtual void serve()=0 ; // pure virtual function 

    void makeTea(){
        prepareIngredients();
        brew();
        serve();
    }


};


// Derived class for Green Tea
class GreenTea : public Tea {
public:
    void prepareIngredients() override {
        cout << "Preparing green tea leaves and hot water." << endl;
    }
    void brew() override {
        cout << "Brewing green tea." << endl;
    }
    void serve() override {
        cout << "Serving green tea in a cup." << endl;
    }


};


class MasalaTea : public Tea {
public:
    void prepareIngredients() override {
        cout << "Preparing masala tea ingredients   ." << endl;
    }
    void brew() override {
        cout << "Brewing masala tea." << endl;
    }
    void serve() override {
        cout << "Serving masala tea in a cup." << endl;
    }


};

int main(){
    GreenTea greentea;
    MasalaTea masalatea;
    greentea.makeTea();
    masalatea.makeTea();




    return 0;

}

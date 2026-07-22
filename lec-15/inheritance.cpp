#include <iostream>
#include <vector>
using namespace std ;
//base class

class Tea{
    protected:
        string teaName;
        int servings ;      
        vector<string> ingredients; 
    public:
        Tea(string name , int serve ): teaName(name), servings(serve) {
            cout << "tea constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;  
        }
        virtual void brew() const {
            cout << "Brewing tea: " << teaName << endl;
        }

        virtual void serve() const {
            cout << "Serving tea: " << teaName << endl;
        }
        virtual ~Tea(){
            cout << "tea destructor called. Tea Name: " << teaName << endl;
        }







    };

class GreenTea : public Tea {
    public :
        GreenTea(int serve): Tea("Green Tea", serve){
            cout << "green tea constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;
        }

        void brew() const override {
    
            cout << "Brewing green tea: " << teaName << endl;            
        }
        ~GreenTea(){
            cout << "green tea destructor called. Tea Name: " << teaName << endl;
        }
};

class MasalaTea : public Tea {
    public :
        MasalaTea(int serve): Tea("Masala Tea", serve){
            cout << "masala tea constructor called. Tea Name: " << teaName << ", Servings: " << servings << endl;
        }

        void brew() const override final {
            cout << "Brewing masala tea: " << teaName << endl;            
        }
        ~MasalaTea(){
            cout << "masala tea destructor called. Tea Name: " << teaName << endl;
        }



};
              
// // class SpicyMasalaTea : public MasalaTea{
//     public:
//         void brew() const override {
//             cout << "Brewing spicy masala tea: " << teaName << endl;
//         }
// };

int main (){
    
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();   
    tea2->serve();

    delete tea1;
    delete tea2;

    
    
    
    return 0;



}
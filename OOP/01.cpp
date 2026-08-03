#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public: 
        // data members (attributes)
        string teaName;//Name of the tea
        int servings;//number of servings
        vector<string> ingredients;//list of ingeredients

        void chaiDetails(){
            cout<<"Tea Name : "<<teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingredients : ";
            for(string ingredient : ingredients){
                cout<<ingredient<<" ";
            }
            cout<<endl;
        }
};


int main(){
    Chai chaiOne;

    chaiOne.teaName = "Lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water","Lemon","Honey" , "tea"};

    chaiOne.chaiDetails();


    Chai chaiTwo;
    chaiTwo.teaName = "Masala tea";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water","Ginger","Brown Sugar","Cinnamon powder","Tea leaves","Tea Masala"};
    chaiTwo.chaiDetails();
    return 0;
}
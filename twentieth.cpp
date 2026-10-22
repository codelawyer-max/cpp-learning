#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
       //data members 
        string teatype;
        int servings;
        vector<string> ingredients;

        //member functions
        void display(){
            cout<< "tea type: "<<teatype<<endl;
            cout<< "servings: "<<servings<<endl;
            cout<< "ingredients: ";
            for(string ingredient: ingredients){
                cout<<ingredient<<" ";
            }
            cout<<endl;
        }
       
};

int main(){
     Chai chaione;
     chaione.teatype="lemon tea";
     chaione.servings=5;
     chaione.ingredients={"water", "lemon", "sugar"};
     chaione.display();

     Chai chaitwo;
     chaitwo.teatype="masala tea";
     chaitwo.servings=28;
     chaitwo.ingredients={"water", "milk", "sugar", "tea leaves", "masala"};
     chaitwo.display();


}

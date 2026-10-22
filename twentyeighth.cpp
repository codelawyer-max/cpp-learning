#include<iostream>
#include<string>
#include<vector>
using namespace std;

class chai{
    private: 
    string name;
    int servings;
    vector<string> ingredients;
    public:
    chai(){
        name="masala tea";
        servings=2;
        ingredients={"water", "milk", "tea leaves", "sugar"};
    }

    chai(string nam, int serve, vector<string> ingre){
        name=nam;
        servings=serve;
        ingredients=ingre;
    }

    //getter for name
    string getname(){
        return name;
    }
    //setter for name
    void setname(string nam){
        name=nam;
    }

    //getter for servings
    int getservings(){
        return servings;
    }
    //setter for sevrings
    void setservings(int serve){
        servings=serve;
    }

    //getter for ingredients
    vector<string> getingredients(){
        return ingredients;
    }
     //setter for ingredients
void setingredients(vector <string> ingr){
     ingredients=ingr;
      
}
     void display(){
        cout<<"tea name is: "<<name<<endl;
        cout<<"servings are: "<<servings<<endl;
        cout<<"ingredients are: "<<endl;
        for(string ingr: ingredients){
            cout<<ingr<<" ";
        }
        cout<<endl;
     }

}; 
 
int main(){
    chai chai;
    chai.getingredients();
    chai.getname();
    chai.setingredients({"water", "milk", "tea leaves", "sugar"});
    chai.setname("masala tea");
    chai.setservings(4);
    chai.getservings();
    chai.display();
    return 0;
}
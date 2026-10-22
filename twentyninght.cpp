#include<iostream>
#include<vector>

using namespace std;
 
class chai{
    public:
    string name;
    int servings;
    vector<string> ingredients;

    //delegation constructor
    chai(string nam): chai(nam, 2, {"water", "milk"}){}

    chai(string nam, int serve, vector<string> ingr){
        name=nam;
        servings=serve;
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
    chai quickchai("Quick chai");
    quickchai.display();
    
     
}
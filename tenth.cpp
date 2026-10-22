#include<iostream>
using namespace std;

int main(){
    
  int choice;
    cout<<"enter the typr of tea: "<<endl;
    cout<<"1. lemon tea\n 2. green tea\n 3. oolong tea\n";
    cout<<"enter your choice: "<<endl;
    cin>>choice;

    switch(choice){
        case 1: 
          cout<<"lemon tea!!"<<endl;
          break;
          case 2: 
           cout<<"green tea!!"<<endl;
          break;
          case 3: 
           cout<<"oolong tea!!"<<endl;
          break;
          default :
            cout<<"INVALID CHOICE!!"<<endl;


    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    
    int cups;
    cout<<"enter the no of cups: ";
    cin>>cups;

    if(cups>20){
        cout<<"GOLD BADGE!!"<<endl;
    }else if(cups>=10&&cups<=20){
        cout<<"SILVER BADGE!!"<<endl;
    }else{
        cout<<"NO BADGE!!"<<endl;
    }

    return 0;
}
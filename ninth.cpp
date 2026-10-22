#include<iostream>
#include<string>
using namespace std;

int main(){
    int hour;
    cout<<"enter the time in houra: "<<endl;
    cin>>hour;

    if(hour>=8&&hour<=18){
        cout<<"tea shop is open!!"<<endl;

    }else{
        cout<<"tea shop is closed!!"<<endl;
    }


    

    return 0;
}
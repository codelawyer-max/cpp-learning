#include <iostream>
#include<string>
using namespace std;



int main(){
    auto preparetea =  [] (int  cups){
        cout<<"serving "<<cups<<" cups  of tea"<<endl;
    };
    preparetea(5);
}
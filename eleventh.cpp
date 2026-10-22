#include <iostream>
using namespace std;

int main(){
    int teacups;
    cout<<"enter no of teacups" <<endl;
    cin>>teacups;

    while(teacups>5){
           teacups--;
        cout<<"serving teacups!!"<<endl<<teacups<<" reamining"<<endl;
    }

    return 0;
}
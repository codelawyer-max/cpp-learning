#include<iostream>
using namespace std;

int main(){
    int teabags;
    cout << "enter the no of teabags: "<<endl;
    cin>>teabags;

    if(teabags>10){
        teabags+=5;
    }
    cout<< "total teabags are: "<<teabags;

    return 0;
}
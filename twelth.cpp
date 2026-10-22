#include <iostream>
#include<string>
using namespace std;

int main(){
    string response;
  

    do{
cout<<"do you like tea? "<<endl;
    cin>>response;
    }while(response!="no"&& response!="NO");
    return 0;
}
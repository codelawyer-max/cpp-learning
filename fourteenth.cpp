#include <iostream>
#include<string>
using namespace std;

int main(){
       string response ;

       while(true){
        cout<<("do you want more tea(type stop to exit)? : ");
        cin>>response;
    
        if(response=="stop"){
           
            break;
        
       }

      

    }
      cout <<"no more tea (loop is exited!!)";
    return 0;
}


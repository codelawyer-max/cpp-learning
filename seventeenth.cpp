#include <iostream>
#include<string>
using namespace std;

void servechai(int cups){
     cups=cups+7;
     cout<<"serving "<<cups<<"  cups of tea"<<endl;
}

int main(){
    int cups=5;
    servechai(cups);
    cout<<"total cups of tea : "<<cups<<endl;
    return 0;
}
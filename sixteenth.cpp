#include <iostream>
#include <string>
using namespace std;

int checktemperature(int temperature)
{
    
    return temperature;
    cout<<endl;
}

void servechai(int cups);

void maketea(){
    cout<<" making tea "<<endl;
}

void servechai(int cups){
    cout<<"serving "<<cups<<" cups of tea "<<endl;
}

int main()
{
    int temp = checktemperature(56);
    cout << temp;
    maketea();
    servechai(5);
    
    return 0;
}
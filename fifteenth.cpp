#include <iostream>
#include<string>
using namespace std;

int main(){
       string teatypes [3]= {"green tea", "black tea", "herbal tea"};
       for(int i=0; i<3; i++){
            cout<<"brewing "  <<teatypes[i]<<endl;
            for(int j=1; j<=3; j++){
                cout<<"brewing "<<j<<" cup of "<<teatypes[i]<<endl;
            }
       }
    return 0;
}
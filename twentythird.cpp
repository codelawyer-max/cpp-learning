#include <iostream>
using namespace std;

int* chaicup(int cups){
    int* order= new int[cups];
    for(int i=0;i<cups;i++){
        order[i]=(i+2)*10;
    }
    return order;
}

int main()
{
  int cups= 5;
  int* chaiorder= chaicup(cups);
   for(int i=0;i<5;i++){
     cout<<"chai cups: "<<chaiorder[i+2]<< "ml"<<endl;
   }
   delete[] chaiorder;
}   
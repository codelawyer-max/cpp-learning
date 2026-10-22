#include<iostream>
using namespace std;

int main(){
    int cups;
    float price, totalprice, discountedprice;
    cout<<"enter the no of cups: "<<endl;
    cin>>cups;
    cout<<"enter the price of one cup: "<<endl;
    cin>> price;
    totalprice= cups*price;
    if(price>1000.50){
        discountedprice= totalprice-(totalprice*0.05);
        cout<<"total price is: "<<totalprice<<endl;
    
    }
    else{
        cout<<"total price is: "<<totalprice<<endl;
    }
    return 0;
  }
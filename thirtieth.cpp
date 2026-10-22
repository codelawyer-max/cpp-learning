#include<iostream>
#include<string>
using namespace std;

class bank{
    private:
    string account;
    double balance;

    public:
    bank(string acc, double initbal){
        account=acc;
        balance=initbal;
    }

    //getter 
    double getbalance(){
        return balance;
    }

    void deposit(double amount){
        balance+=amount;
        if(amount>0){
            cout<<"deposited amount: "<<amount<<endl;
            cout<<"new balance: "<<balance<<endl;
        }else{
            cout<<"invalid amount !!"<<endl;
        }
    }

    void withdraw(double amount){
        balance-=amount;
        if(amount>0 && amount<=balance){
            cout<<"withdrawn amount: "<<amount<<endl;
            cout<<"new balance: "<<balance<<endl;
        }else{
            cout<<"invalid amount !!"<<endl;
        }
    }
};

int main(){
    bank myaccount("12334556ab", 1000.456);
    myaccount.getbalance();
    myaccount.deposit(678.99);
    myaccount.withdraw(457.00);
}
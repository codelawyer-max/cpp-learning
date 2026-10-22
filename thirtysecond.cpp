#include<iostream>
#include<string>
using namespace std;

class tea{
    protected:
    string name;
    int servings;

    public:
    tea(string nam, int serve): name(nam), servings(serve){
        cout<<"tea constructor called "<<name<<endl;
    }

    virtual void brew() const{
        cout<<"brewing "<<name<<"with generic method "<<endl;
    }

    virtual void serve() const{
        cout<<"serving  "<<servings <<" cup of tea with generic method "<<endl;
    }

    virtual ~tea(){
        cout<<"tea destructor called for "<<name<<endl;
    }
};

class greentea: public tea{
     public:
     greentea(int serve): tea("green tea", serve){
           cout<<"green tea construtor called"<<endl;
     }

     void brew() const override{
          cout<<"brewing "<<name<<"by steeping green tea leaves"<<endl;
     }

     ~greentea(){
        cout<<"green tea destructor called"<<endl;
     }
};

class masalatea: public tea{
     public:
     masalatea(int serve): tea("masala tea", serve){
           cout<<"masala tea construtor called"<<endl;
     }

     void brew() const override final{
          cout<<"brewing "<<name<<"using water and milk"<<endl;
     }

     ~masalatea(){
        cout<<"masala  tea destructor called"<<endl;
     }
};



int main(){
      tea* tea1= new greentea(65);
      tea* tea2= new masalatea(69);

      tea1->brew();
      tea1->serve();
      tea2->brew();
      tea2->serve();
      tea1->~tea();
      tea2->~tea();
      

    return 0;
}
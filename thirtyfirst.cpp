#include<iostream>
#include<string>
using namespace std;

class tea{
    public:
    virtual void prepare()=0;
    virtual void brew()=0;
    virtual void serve()=0;


    void maketea(){
        prepare();
        brew();
        serve();
    }
};


//derived class
class greentea: public tea{
    void prepare(){
        cout<<"preparing green tea !! "<<endl;

    }
     void brew(){
        cout<<" green tea brewed !! "<<endl;

    }
     void serve(){
        cout<<" green tea served !! "<<endl;

    }
};

class masalatea: public tea{
    void prepare(){
        cout<<"preparing masala tea !! "<<endl;

    }
     void brew(){
        cout<<" masala tea brewed !! "<<endl;

    }
     void serve(){
        cout<<" masala  tea served !! "<<endl;

    }
};

int main(){
    greentea greentea;
    masalatea masalatea;

    greentea.maketea();
    masalatea.maketea();

    return 0;

}
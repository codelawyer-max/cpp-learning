#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int age;
    int rollno;
    public:
    student(string nam, int ag, int roll): name(nam), age(ag), rollno(roll){}
     
    friend bool comparerollno (const student &s1, const student &s2);
    void display() const{
        cout<<"name is: "<<name<<endl;
        cout<<"age is: "<<age<<endl;
        cout<<"rollno is: "<<rollno<<endl;
    }

};
    
bool comparerollno(const student &s1, const student &s2){
    return s1.rollno>s2.rollno;
}
int main(){
    student s1("kartik", 21, 26);
    student s2("angel", 20, 34);
     s1.display();
     s2.display();

     if(comparerollno(s1,s2)){
        cout<<"s1 has greater rollno than s2 !!"<<endl;
     }else{
        cout<<"s2 has greater rollno than s1 !!"<<endl;
     }
     
     return 0;
}

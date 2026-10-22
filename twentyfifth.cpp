#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student(string nam, int mar)
    {
          name=nam;
          marks=mar;
        cout << "parameterized constructor is called!!" << endl;
    }

    Student(const Student& other)
    {
        name = other.name;
        marks = other.marks;
        cout << "copy constructor is called!!" << endl;
    }

    void display()
    {
        cout << "name is : " << name << endl;
        cout << "marks are: " << marks << endl;
    }
};

int main()
{
    Student s("kartik",85);
    s.display();

    Student s1(s);
    s1.display();
    return 0;
}
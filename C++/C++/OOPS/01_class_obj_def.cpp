//default constructor is used in this code.

#include<iostream>
#include<string>
using namespace std;

class Student
{
public: 
    int id;
    string name;
    int age;
    int nos;                    //nos-> no of subjects.

    //Default constructor
    Student()
    {
        cout << "Student default constructor called" << endl;
    }

    void eating(){
        cout << this->name << "Eating" << endl;
    }

    void sleeping(){
        cout << this->name << "Sleeping" << endl;
    }

    void study(){
        cout << this->name << "Studying" << endl;
    }

    ~Student()
    {
        cout << "Student default destructor called" << endl;
    }
};

int main(){
    Student A;
    A.id = 1;
    A.name = "Rutik";
    A.age =18;
    A.nos = 6;


    A.sleeping();
    return 0;

}
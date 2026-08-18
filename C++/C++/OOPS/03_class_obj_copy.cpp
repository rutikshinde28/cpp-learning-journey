#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;
    int nos;

    Student(int id,string name,int age,int nos){
        cout << "Parameterised constructor called." << endl;
        this-> id = id;
        this-> name = name;
        this-> age = age;
        this-> nos = nos;
    }

    Student(const Student &srcobj){
        cout << "Student copy constructor called." << endl;
        this-> id = srcobj.id;
        this-> name = srcobj.name;
        this-> age = srcobj.age;
        this-> nos = srcobj.nos;
    }
     
    void sleep(){
        cout << this-> name << " Sleeping" << endl;
    }

    void studying(){
        cout << this-> name << " Studying" << endl;
    }

    ~Student(){
        cout << "Parametrised destructor called.";
    }
};

int main(){
    Student A(1,"Rutik",18,5);
    Student C = A;
    cout << A.name << " "<< C.name << endl;

}
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(const Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void display(){
        cout <<"Name: " << name << endl;
        cout <<"Cgpa: " << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Rutik",7.3);
    s1.display();

    cout << endl;
    Student s2(s1);
    *(s2.cgpaPtr) = 8.3;
    s1.display();

    cout << endl;
    s2.name = "Rutuja";
    s2.display();
}
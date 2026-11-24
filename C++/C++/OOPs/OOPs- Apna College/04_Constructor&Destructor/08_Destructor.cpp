#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        cout << "- Parametrised constructor called -\n";
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

    ~Student(){
        cout << "- Destructor called -\n" << endl;
        delete cgpaPtr;
    }
};

int main(){
    Student s1("Rutik",8.3);

    s1.display();

}
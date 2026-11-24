#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    long long prn;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{
public:

    void display(){
        cout << "Name: " << name << endl;
        cout << "Prn: " << prn << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    TA s1;

    s1.name = "Rutik";
    s1.prn = 202501110062;
    s1.subject = "OOPs";
    s1.salary = 32000;

    s1.display();

}
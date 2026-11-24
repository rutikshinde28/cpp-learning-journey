#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Teacher{
public:
    string subject;
    long int salary;
};

class TA : public Person,public Teacher{

};

int main(){
    TA t1;
    t1.name = "Rutik";
    t1.subject = "DSA";
    t1.salary = 1000000;

    cout << "Name - "<< t1.name << endl;
    cout << "Subject - " << t1.subject << endl;
    cout << "Salary - " << t1.salary << endl;
}
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout << "- Default constructor called -\n";
    }
};

class Student : public Person{
public:
    long long prn;

    ~Student(){
        cout << "- Destructor called -\n";
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Prn: " << prn << endl;
    }
};

int main(){
    Student s1;

    s1.name = "Rutik";
    s1.age = 19;
    s1.prn = 202501110062;

    s1.display();
}
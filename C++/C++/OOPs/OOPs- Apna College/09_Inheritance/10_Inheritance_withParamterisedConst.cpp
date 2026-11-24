#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person(string name,int age){
        cout << "- Person Parameterised constructor called -" << endl;
        this->name = name;
        this->age = age;
    }

    ~Person(){
        cout << "- Person Destructor called -\n";
    }
};

class Student : public Person{
public:
    long long prn;

    Student(string name, int age, long long prn) : Person(name, age){
        cout << "- Student Paramterised constructor called -\n";
        this->prn = prn;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Prn: " << prn << endl;
    }
    ~Student(){
        cout << "- Student Destructor called -\n";
    }
};

int main(){
    Student s1("Rutik", 19, 202501110062);

    s1.display();
}
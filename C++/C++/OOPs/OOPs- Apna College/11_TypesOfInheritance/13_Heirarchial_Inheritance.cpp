#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    long long prn;

    Student(string name, int age, long long prn) : Person(name, age){
        this->prn = prn;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "PRN: " << prn << endl;
    }
};

class Teacher : public Person{
public:
    string subject;

    Teacher(string name, int age, string subject) : Person(name, age){
        this->subject = subject;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main(){

    Student s1("Rutik", 18, 202501110062);
    Teacher t1("Vaibhav", 35, "OOPs");

    cout << "--- Student Details ---" << endl;
    s1.display();

    cout << "\n--- Teacher Details ---" << endl;
    t1.display();

    return 0;
}
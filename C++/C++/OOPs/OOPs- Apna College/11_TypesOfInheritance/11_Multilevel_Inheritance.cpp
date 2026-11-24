#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        cout << "- Person constructor called -" << endl;
        this->name = name;
        this->age = age;
    }

    ~Person(){
        cout << "- Person destructor called -" << endl;
    }
};

class Student : public Person{
public: 
    long long prn;

    Student(string name, int age, long long prn) : Person(name, age){
        cout << "- Student constructor called -" << endl;
        this->prn = prn;
    }

    ~Student(){
        cout << "- Student destructor called -" << endl;
    }
};

class GradStudent : public Student{
public:
    string researchArea;

    GradStudent(string name, int age, long long prn,string researchArea) : Student(name , age, prn){
        cout << "- GradStudent constructor called -" << endl;
        this->researchArea = researchArea;
    }

    ~GradStudent(){
        cout << "- GradStudent destructor called -" << endl;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Prn: " << prn << endl;
        cout << "Research area: " << researchArea << endl;
    }
};

int  main(){
    GradStudent s1("Rutik", 19 ,202501110062, "Physics");

    s1.display();
}
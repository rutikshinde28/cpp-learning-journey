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

class Student : virtual public Person{
public:
    long long prn;

    Student(string name, int age, long long prn) : Person(name, age){
        this->prn = prn;
    }
};

class Teacher : virtual public Person{
public:
    string subject;

    Teacher(string name, int age, string subject) : Person(name, age){
        this->subject = subject;
    }
};

class TeachingAssistant : public Student, public Teacher{
public:
    int hours;

    TeachingAssistant(string name, int age,long long prn, string subject, int hours) : Person(name, age),
      Student(name, age, prn),
      Teacher(name, age, subject){

        this->hours = hours;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "PRN: " << prn << endl;
        cout << "Subject: " << subject << endl;
        cout << "Working Hours: " << hours << endl;
    }
};

int main(){

    TeachingAssistant t1(
        "Rutik", 18, 202501110062, "OOPs", 5
    );

    t1.display();

    return 0;
}
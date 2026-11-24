#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Default Constructor or Non parametrised constructor
    Teacher(){
        cout << "- Default Constructor called -" << endl;
    }

    /// Parametrised Constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }

    void display(){
        cout <<"Name: " << name << endl;
        cout <<"Subject: " <<subject << endl;
        cout <<"Department: "<< dept << endl;
        cout << endl;
    }

};

int main(){
    Teacher t1;
    Teacher t2("Ayan", "Entc", "DEE", 50000);             //using paramterised constructor

    t1.name = "Rutik";
    t1.subject = "OOPs";
    t1.dept = "CSE- AIML";
    
    t1.display();
    t1.changeDept("AIML");
    
    t1.display();
    t2.display(); 

}
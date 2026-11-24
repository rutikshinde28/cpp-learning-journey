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

    Teacher(Teacher &orgObj){
        cout << "I am a custom copy constructor\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
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
    // Teacher t1;
    Teacher t2("Ayan", "Entc", "DEE", 50000);             //using paramterised constructor

    // t1.name = "Rutik";
    // t1.subject = "OOPs";
    // t1.dept = "CSE- AIML";
    
    // t1.display();
    // t1.changeDept("AIML");
    
    // t1.display();
    // Teacher t3(t2);             //Default copy constructor
    // t3.display();

    // cout << endl;

    Teacher t4(t2);                 //custom copy constructor
    t4.display();

}
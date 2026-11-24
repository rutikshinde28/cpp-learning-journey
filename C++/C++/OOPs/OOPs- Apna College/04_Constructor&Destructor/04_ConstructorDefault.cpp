#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    int salary;

public:
    // Default Constructor or Non parametrised constructor
    Teacher(){
        cout << "- Default Constructor called -" << endl;
    }
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(int s){
        salary = s;
    }

    //getter
    int getSalary(){
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
    Teacher t2;                  // here two times default constructor print because, two times object called

    t1.name = "Rutik";
    t1.subject = "OOPs";
    t1.dept = "CSE- AIML";
    
    t1.display();
    t1.changeDept("AIML");
    
    t1.display();

}
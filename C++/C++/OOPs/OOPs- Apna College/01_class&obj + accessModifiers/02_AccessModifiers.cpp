#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    int salary;

public:
    // properties/attributes
    string name;
    string dept;
    string subject;

    //methods/ member functions 
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
        cout << name << endl;
        cout << subject << endl;
        cout << dept << endl;
    }
};


int main(){
    Teacher t1;
    t1.name = "Rutik";
    t1.subject = "C++";
    t1.dept = "CSE - AIML";
    // t1.salary = 35000;
    t1.setSalary(45000);
    
    // cout << t1.name << endl;
    // cout << t1.subject << endl;
    // cout << t1.dept << endl;
    t1.display();
    // cout << t1.salary << endl;
    
    cout << t1.getSalary();


    t1.changeDept("AIML");
    cout << "\nUpdated Dept: " << t1.dept << endl;
}
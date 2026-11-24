#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    // properties/attributes
    string name;
    string dept;
    string subject;
    int salary;

    //methods/ member functions 
    void changeDept(string newDept){
        dept = newDept;
    }
};


int main(){
    Teacher t1;
    t1.name = "Rutik";
    t1.subject = "C++";
    t1.dept = "CSE - AIML";
    t1.salary = 35000;

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    cout << t1.salary << endl;

    t1.changeDept("AIML");
    cout << "Updated Dept: " << t1.dept << endl;
}
#include<iostream>
using namespace std;

class Person{
public:
    // Person{
    //     cout << "I am in "
    // }
    string name;
    int age;
};

class Student : public Person{
public:
    int roll_no;
};

class Gradstudent : public Student{
public:
    string research_paper;
};

int main(){
    Gradstudent A;
    A.name ="Rutik";
    A.age = 18;
    A.roll_no = 62;
    A.research_paper = "Machine Learning";

    cout << A.name << " ";
    cout << A.age << " ";
    cout << A.roll_no << " ";
    cout << A.research_paper << " ";

}
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;
    int nos;        //nos -> no of subjects.

    Student(int id,string name,int age,int nos){
        cout << "Parametrised constructor called." << endl;
        this -> id =id;
        this -> name = name;
        this -> age = age;
        this -> nos = nos;
    }

    void study(){
        cout << this->name << " Studying" << endl;
    }

    void play(){
        cout << this->name << " Playing" << endl;
    }

    void sleeping(){
        cout << this-> name << " Sleeping" << endl;
    }

    ~Student(){
        cout << "Parametrised destructor called." << endl;
    }
};

int main(){
    Student A(1,"Rutik",18,5);
    cout << A.id << " "<< A.name << " " << A.age << " " << A.nos << endl;
    A.study();

    cout << "\n";

    Student B(2,"Ramesh",20,6);
    B.play();
    cout << "\n";

    Student C(3,"Karan",12,2);
    C.study();
    cout << "\n";

    Student D(4,"Sunil",30,12);
    D.study();
    return 0;
    
}
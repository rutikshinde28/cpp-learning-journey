#include<iostream>
#include<string>
using namespace std;

class Student
{
public: 
    int id;
    string name;
    int age;
    int nos;            //nos -> no of subjects.
    float *gpa;

    Student(int id,string name,int age,int nos,float gpa){
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->gpa = new float(gpa);  // Allocate memory and initialize
        cout << "Parametrised constructor called." << endl;
    }

    void study(){
        cout << this->name << " Studying" << endl;
    }

    void eating(){
        cout << this -> name << " Eating" << endl;
    }

    void sleeping(){
        cout << this-> name << " Sleeping" << endl;
    }

    ~Student(){
        cout << "Parametrised destructor called.";
        delete this->gpa;
    }
};

int main(){
    Student *A = new Student(1,"Rutik",18,5,7.30);
    cout << A -> name << endl;
    cout << A -> age << endl;
    A -> study();
    delete A;
    return 0;

}
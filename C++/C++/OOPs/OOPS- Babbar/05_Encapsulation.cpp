#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;
    int nos;

private:
    float *gpa;
    string gf;

public:

    void setGpa(float a)
    {
        *this->gpa = a;
    }

    float getGpa() const
    {
        return *this->gpa;
    }

    float getAge()
    {
        return this->age;
    }

    Student()
    {
        cout << "Default constructor called." << endl;
        gpa = new float(0.0);
    }

    Student(int id, string name, int age, int nos, float gpa)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;

        this->gpa = new float(gpa);

        cout << "Parametrised constructor called." << endl;
    }

    void Sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }

    void Studying()
    {
        cout << this->name << " Studying" << endl;
    }

    ~Student()
    {
        cout << "Destructor called." << endl;
        delete this->gpa;
    }

private:

    void chattinggf()
    {
        cout << this->name
             << " Person is chatting with their gf"
             << endl;
    }
};

int main()
{
    Student A(1, "Rutik", 18, 5, 9.2);

    cout << "ID: " << A.id << endl;
    cout << "Name: " << A.name << endl;
    cout << "Age: " << A.age << endl;
    cout << "Number of subjects: " << A.nos << endl;

    // cout << A.gpa << endl;       // private

    A.Sleep();
    A.Studying();

    // A.chattinggf();              // private

    cout << "GPA: " << A.getGpa() << endl;

    A.setGpa(7.3);

    cout << "Updated GPA: " << A.getGpa() << endl;

    cout << "Age using getter: " << A.getAge() << endl;

    return 0;
}
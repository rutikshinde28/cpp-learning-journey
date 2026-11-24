#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout << "Parent class" << endl;
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "Child class" << endl;
    }
};

int main(){
    Parent p1;
    Child c1;

    // p1.show();
    c1.show();
}
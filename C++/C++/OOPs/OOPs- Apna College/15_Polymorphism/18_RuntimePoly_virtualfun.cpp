#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "Parent class\n";
    }

    virtual void hello(){
        cout << "Hello from parent\n";
    }
};

class Child: public Parent{
public:
    void getInfo(){
        cout << "Child class\n";
    }

    void hello(){
        cout << "Hello from child\n";
    }
};

int main(){
    Child c1;

    c1.hello();
}

/*
For Better understanding also check - 14_Hybrid_Inheritance
in that code we used virtual.

explanation-We use `virtual` inheritance to prevent duplicate copies
            of the `Person` class in `TeachingAssistant` and avoid the Diamond Problem.
*/
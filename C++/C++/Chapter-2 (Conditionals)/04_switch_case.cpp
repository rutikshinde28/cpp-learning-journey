/*Ques:  
Write a program to create a calculator that performs basic arithmetic operations
 (add, subtract, multiply and divide) using switch case .
The calculator should input two numbers and an operator from user.
*/


//using switch case -
#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter number1: "; cin >> n1;

    char op;
    cout << "Enter operator: "; cin >> op;

    int n2;
    cout << "Enter number2: "; cin >> n2;

    switch (op)
    {
    case '+':
        cout << "Addition of numbers is: " << n1 + n2 << endl;
        break;
    case '-':
        cout << "Substraction of numbers is: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Multiplication of numbers is: " << n1 * n2 << endl;
            break;
    case '/':
        cout << "Division of numbers is: " << n1 / n2 << endl;
        break;
    default:
        cout << "Invalid Operator!";
        break;
        return 0;
    }
}

 
/*
using if else-
#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter number 1: "; cin >> n1;     //n1,n2=numbers
    char op;
    cout << "Enter operator: "; cin >> op;         //op- operator
    int n2;
    cout << "Enter number 2: "; cin >> n2;

    cout << "\n";

    if(op == '+') cout << "Addition of two no is: " << n1 + n2;
    if(op == '-') cout << "Substraction of two no is: " << n1 - n2;
    if(op == '*') cout << "Multiplication of two no is: " << n1 * n2;
    if(op == '/') cout << "Division of two no is: " << n1 / n2;
    return 0;
}
*/
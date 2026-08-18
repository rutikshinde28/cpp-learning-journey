#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    (a%2==0) ? cout << "Even Number" : cout << "odd number";   
    return 0;
}

/*
The ternary operator (?:) is a shorthand way of writing 
an if...else statement in a single line.
*/
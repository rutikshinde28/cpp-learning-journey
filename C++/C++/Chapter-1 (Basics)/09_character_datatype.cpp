//ASCII values using character

#include<iostream>
using namespace std;
int main()
{
// variable to their ASCII values-
    char ch;
    cout << "Enter a variable: ";
    cin >> ch;

    cout << "ASCII value is: " << (int)ch << endl;
    cout << endl;
    
//ASCII values to their variables-
    int x;
    cout << "Enter ASCII value: ";
    cin >> x;

    cout << "The variable is: " << (char)x << endl;
    return 0;
}




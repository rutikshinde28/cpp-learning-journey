#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout << x << endl;          //10
    cout << x++ << endl;        //10
    cout << x << endl;          //11
    cout << --x << endl;        //10
    cout << x << endl;          //10
    return 0;
}
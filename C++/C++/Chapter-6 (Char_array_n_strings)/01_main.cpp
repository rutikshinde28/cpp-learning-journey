#include<iostream>
using namespace std;

int main()
{
    char name[6] = {'R','U','T','I','K','\0'};
    cout << name << endl;

    char arr[12] = "RutikShinde";
    for(int index=0;index < 11;index++){
        cout << arr[index];
    }

    int brr[3] = {1,2,3};
    cout << arr << endl;

    char crr[3] = "Hi";
    cout << crr << endl;

    // cout << "\nPrinting value of 13th index:  " << arr[13];
    int asciivalue = arr[13];
    cout << "\n" <<  asciivalue << endl;
}
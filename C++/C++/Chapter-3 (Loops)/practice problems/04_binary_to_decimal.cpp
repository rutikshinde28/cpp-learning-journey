#include<iostream>
#include<cmath>

using namespace std;

int binarytodecimal(int n)
{
    int i=0;
    int decimal=0;

    while(n){
        int bit = n % 10;
        decimal += bit * pow(2,i++);
        n = n/10;
    }
    return decimal;
}
int main(){
    int n;
    cout << "Enter binary digits: ";
    cin >> n;
    cout << "Decimal digit is: " << binarytodecimal(n);
}
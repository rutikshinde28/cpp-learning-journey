#include<iostream>
using namespace std;

int decimal_to_binary(int n){
while(n>0){
    int bit = n % 2;
    cout << bit << " ";
    n = n / 2;
}
}

int main(){
    int n;
    cout << "Enter a number for conversion: " ; cin >> n;
    int binary = decimal_to_binary(n);
}

/* 
Always remember when the number is successfully converted into binary
we want to read the number from right to left not left to right.
*/
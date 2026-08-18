#include<iostream>
using namespace std;

// Multiplication table
void Multiplicationtable(int n)
{
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
}

void Myname(){
    cout << "Rutik" <<endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;
    Multiplicationtable(n);
    Myname();
    return 0;
}
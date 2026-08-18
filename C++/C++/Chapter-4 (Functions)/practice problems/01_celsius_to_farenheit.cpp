#include<iostream>
using namespace std;

int celsiustofarenheit(int celsius){
    int farenheit;
    farenheit=(celsius * (9.0/5.0)) + 32;
    cout << "Farenheit: " << farenheit << endl;
}

int main(){
    int celsius ;
    cout << "Enter Celsius: ";
    cin >> celsius;

    celsiustofarenheit(celsius);
}
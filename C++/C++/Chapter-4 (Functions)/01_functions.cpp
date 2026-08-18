#include<iostream>
using namespace std;

int sum(int a,int b){
    int total_sum = a+b;
    return total_sum;
}

void My_name(){
    cout << "Rutik" << endl;
}

int main(){
    int a = sum(10,15);
    cout << "Sum : " << a << endl;
    int b = sum(50,45);
    cout << "Sum : " << b << endl;
    int c = sum(82,76);
    cout << "Sum : " << c << endl;
    
    My_name();
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int arr[5] = {60,70,50,30,90};
    for (int index=0 ; index < 5; index++){
        cout << arr[index] << " ";
    }
   
    cout << endl;

    int sum=0;
    for(int index=0;index < 5;index++){
        sum = sum + arr[index];
    }
    cout << "Total sum: " << sum;
    return 0;
}
#include<iostream>
using namespace std;

void initializearr(int arr[],int size){
    for (int index=0 ; index <= size-1 ; index++){
        cout << arr[index] << " ";
    }
}

int main(){
    int arr[10];
    int size = 10;
    for(int index=0 ; index <= size-1 ; index++){
        arr[index] = 1;
    }
    initializearr(arr,size);
}
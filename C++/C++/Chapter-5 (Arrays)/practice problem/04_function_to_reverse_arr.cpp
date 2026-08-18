#include<iostream>
using namespace std;

void reversearr(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarr(int arr[],int size){
    for (int index = 0;index <= size-1; index++){
        cout << arr[index] << " ";
    }
}

int main(){
    int arr[8];
    int size = 8;
    for (int index=0 ; index <= size-1; index++){
        cout << "Enter the value of index arr["<< index <<"]: ";
        cin >> arr[index];
    }

    cout << endl;
    cout << "Before: ";
    printarr(arr,size);
    cout << endl;

    cout << endl;
    reversearr(arr,size);

    cout << "After: ";
    printarr(arr,size);
    cout << endl;
}   
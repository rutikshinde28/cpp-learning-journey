#include<iostream>
using namespace std;

int count=1;
void multipliarr(int arr[],int size){
    for (int index=0;index < size-1;index++){
    arr[index] = 10 * count;
    count++;
    }
}

void printarr(int arr[],int size){
    for (int index=0;index < size-1;index++){
        cout << arr[index] << " ";
    }
}

int main(){
    int arr[10];
    int size=10;
    multipliarr(arr,size);
    printarr(arr,size);

}
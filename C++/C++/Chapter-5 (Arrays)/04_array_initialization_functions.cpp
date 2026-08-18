#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}

int main()
{
    int arr[5] = {10};
    int size = 5;

    printarray(arr, size);

    return 0;
}
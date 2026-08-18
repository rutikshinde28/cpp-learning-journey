#include<iostream>
using namespace std;

void printarr(int arr[][3],int size){
    cout << "Matrix" << endl;
    for (int i=0 ; i < 3 ; i++){
        for (int j=0 ; j<3 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int size;
    int arr[3][3]={
                {1,2,3},
                {7,8,9},
                {1,5,8}
            };

    cout << arr[2][2] << endl;
    cout << endl;

    for (int i=0 ; i < 3 ; i++){
        for (int j=0 ; j<3 ; j++){
            cout << "Enter value of matrix arr["<< i << "]["<< j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    printarr(arr,size);


    return 0;
}
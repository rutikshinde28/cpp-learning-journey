//Display the Arithmatic progression (AP) - 1,3,5,7,9.. upto 'n' terms.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=1 ; i<= 2*n-1 ; i +=2){
        cout << i << " ";
    }
    return 0;
}

/*
logic-
formula of AP-
i = a+(n-1)d
a=1 , d = 2
i = 1 +(n-1)2
i= 2*n - 1      this is the condition
*/

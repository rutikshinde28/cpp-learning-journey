//Display the Arithmatic progression (AP) - 4,7,10,13,16.. upto 'n' terms.

//method 1-
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=4 ; i <= 3*n+1 ; i += 3){
        cout << i << " ";
    }
    return 0;
}

/*
logic-
formula of AP-
i = a+(n-1)d
a=4 , d = 3
i = 4+(n-1)3
i= 3*n + 1      this is the condition
*/

//method 2 to solve above question-

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a=4;                                //change is here from above
    for (int i=1 ; i <= n ; i++){                     
        cout << a << " ";
        a += 3;
    }
    return 0;
}
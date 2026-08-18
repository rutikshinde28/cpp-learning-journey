//Printing 0-10 using for loop -

#include<iostream>
using namespace std;
int main()
{
    for(int i=0 ; i<=10 ; i++)
    {
        cout << i << "_Hello World_" << endl;
    }
    return 0;
}

//Printing 0-10 using while loop-

#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    while(i<=10){
        cout << i << "_Hello World_" << endl;
        i++;
    }
    return 0;
}

//Printing 0-10 using do while loop-

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    do
    {
        cout << i << "_Hello World_" << endl;
        i++;
    } while (i<=10);
    return 0;
}
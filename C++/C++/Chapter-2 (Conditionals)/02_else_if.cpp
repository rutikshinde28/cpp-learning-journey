#include<iostream>
using namespace std;
int main()
{
    int English, Hindi, Marathi, Percentage;

    cout << "Enter marks of English: ";
    cin >> English;

    cout << "Enter marks of Hindi: ";
    cin >> Hindi;

    cout << "Enter marks of Marathi: ";
    cin >> Marathi;
    cout << "\n";

    Percentage = (English + Hindi + Marathi)*100/300;
    cout << "-- Result --" << endl;
    cout << "Percentage (%)= " << Percentage << endl;

    if (English >= 40 && Hindi >= 40 && Marathi>= 40)
    {
        cout << "Pass in all subject" << endl;

        if (Percentage <= 100 && Percentage >=90)
        {
            cout << "'A' Grade" << endl;
        }
        else if (Percentage <= 90 && Percentage >=80)
        {
            cout << "'B' Grade" << endl;
        }
        else if(Percentage <=80 && Percentage >= 60)
        {
            cout << "'C' Grade" << endl;
        }
        else if(Percentage <= 60 && Percentage >= 40)
        {
            cout << "'D' Grade" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    
    else 
    {
        cout << "Failed in a subject" << endl;
    }

        return 0;
}
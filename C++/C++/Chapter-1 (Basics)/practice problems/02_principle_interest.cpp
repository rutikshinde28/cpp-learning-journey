#include<iostream>
using namespace std;
int main()
{
    float principle ,rate ,time ,simple_interest;
    cout << "Enter principle amount: ";
    cin >> principle;

    cout << "Enter annual rate (%): ";
    cin >> rate;

    cout << "Enter time period (in years): ";
    cin >> time;

    simple_interest=(principle *rate *time)/100;

    cout << "-- Results --" << endl;
    cout << "Simple interest: " << simple_interest << endl;
    cout << "Total payable amount: " << principle + simple_interest << endl;
    return 0;
}
#include<iostream>
using namespace std;

int simple_interest(int principle,int rate,int time)
{
    int simpleinterest;
    simpleinterest = (principle*rate*time)/100;
    return simpleinterest;

}

int main(){
    int principle;
    cout << "Enter Principle (amount): ";
    cin >> principle;

    int rate;
    cout << "Enter rate (in %): ";
    cin >> rate;

    int time;
    cout << "Enter time (in years): ";
    cin >> time;

    int si = simple_interest(principle,rate,time);
    cout << "Simple Interest: " << si;
    return 0;
}

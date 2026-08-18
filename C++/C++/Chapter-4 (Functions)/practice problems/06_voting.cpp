#include<iostream>
using namespace std;

int voting_eligibility(int n){
    if (n >=18)
    {
        cout << "You are eligible for voting.";
    }
    else
    {
        cout << "You are not eligible for voting.";
    }

}

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    voting_eligibility(age);
    return 0;
}
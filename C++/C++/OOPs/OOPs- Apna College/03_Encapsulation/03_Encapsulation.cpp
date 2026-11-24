#include<iostream>
#include<string>
using namespace std;

class BankAcccount{
private:
    double Balance = 0;

public:
    void deposit(double amount){
        if(amount > 0){
            Balance += amount;
        }
        else{
            cout << "Invalid amount" << endl;
        }
    }

    void display(){
        cout << "Balance in account - " <<Balance<<" Rs/-"<< endl;
    }
};

int main(){
    BankAcccount account;

    account.deposit(5000);
    account.deposit(400);
    account.display();
}
#include<iostream>
using namespace std;

char convertuppertolower(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}

int main(){
    char result = convertuppertolower('j');
    cout << result << endl;

}
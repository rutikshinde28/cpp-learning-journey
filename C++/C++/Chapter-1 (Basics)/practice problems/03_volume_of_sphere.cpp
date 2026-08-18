#include<iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float volume, r;
    cout << "Enter radius of sphere: ";
    cin >> r;
    
    volume = (4.0/3.0)*pi *r *r *r;
    cout << "-- Result --" << endl;
    cout << "The volume of sphere is: " << volume << endl;
    return 0;
}
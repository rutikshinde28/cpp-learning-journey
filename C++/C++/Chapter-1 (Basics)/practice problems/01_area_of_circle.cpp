#include<iostream>
using namespace std;
int main()
{
    const float pi=3.14159265359;
    float r, area;
    cout << "Enter radius of circle: ";
    cin >> r;
    area = pi*r*r;
    cout << "The area of circle is: " << area << endl;
    return 0;
}
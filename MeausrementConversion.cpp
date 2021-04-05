// Programmer: Matt Brundage II
// Date: 3/28/2021

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, c;

    cout << "Enter length in inches: ";
    cin >> n;

    c = n * 2.54;

    cout << "The length in Centimeters is: " << c;
    return 0;
}
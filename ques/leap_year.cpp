//C++ program to check whether the year is leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Input the year : ";
    cin >> year;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        cout << year << " is leap year." << endl;
    else
        cout << year << " is not leap year." << endl;
}
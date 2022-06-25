//C++ program to find largest number among three numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three number : " << endl;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " is the largest." << endl;
    else
    {
        if(b >= c)
            cout << b << " is largest." << endl;
        else
            cout << c << " is largest." << endl;
    }
    return 0;
}
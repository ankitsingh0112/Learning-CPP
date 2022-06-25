//C++ program to check whether number is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : "<< endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is a Even number." << endl;
    }
    else
        cout << num << " is a Odd number." << endl;
    
    return 0;
}
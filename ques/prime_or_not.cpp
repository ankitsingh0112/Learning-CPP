// C++ program to find whether the number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    bool divided = false;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a Prime Number." << endl;
            divided = true;
            break;
        }
    }
    if (!divided)
    {
        cout << num << " is a Prime Number." << endl;
    }
    return 0;
}
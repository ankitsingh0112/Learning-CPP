//WAP to swap two number.

#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;
    cout << "Before Swapping : " << a << "\t" << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping : " << a << "\t" << b << endl;
    return 0;
}
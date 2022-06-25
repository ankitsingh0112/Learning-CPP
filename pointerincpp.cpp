#include <iostream>
using namespace std;

int main()
{
    // what js pointer? ---> Data type which holds the address of other data types
    int a = 2;
    int *b;
    b = &a;

    // & ---> address of operator
    cout << "The address of a is : " << b << endl;
    cout << "The address of a is : " << &a << endl;
    cout << "The address of b is : " << &b << endl;

    // * ---> (value at) Dereference operator
    cout << "The value at address b : " << *b << endl;
    cout << "The value at address b : " << a << endl;

    // Pointer to pointer
    int **c;
    c = &b;
    cout << "The address of b is : " << c << endl;
    cout << "The address of b is : " << &b << endl;
    cout << "The value at address of c is : " << *c << endl;
    cout << "The value at address value_at(value_at(c)) c is : " << **c << endl;
    return 0;
}
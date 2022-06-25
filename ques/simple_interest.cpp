//C++ program to find the simple interst.

#include <iostream>
using namespace std;

int main()
{
    int p, r, t;
    float SI;
    cout << "Input the princple, rate and time : " << endl;
    cin >> p >> r >> t;
    SI = p*r*t/100.0;
    cout << "Simple Interst : " << SI;
    return 0;
}

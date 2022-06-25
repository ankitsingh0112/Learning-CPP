#include <iostream>
using namespace std;

int main(){
    int a = 5; // integers value can be stored using int datatype
    int b = 10;
    int c = a + b;
    cout << c << endl;
    
    char d = 'X'; // characters can be stored using char datatype
    cout << d << endl;

    float f = 1.25; // real and floating point numbers can be stored in float datatype

    bool b1 = true; //boolean only returns true or false
    cout << b1 << endl;

    int size = sizeof(b1); // sizeof operater is used to find the size of any datatype
    cout << size << endl;
}
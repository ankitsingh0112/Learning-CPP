// Constructor Overloading

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    //default constructor
        Complex(){
            a = 0;
            b = 0;
        }
    
    //parameterized constructor
    //constructor overloading : constructor will be called according to to number of parameters are passed
    //if 2 parameters are passed then this constructor will be called
        Complex(int x, int y){
            a = x;
            b = y;
        }
    //if 1 parameters are passed then this constructor will be called
        Complex(int x){
            a = x;
            b = 9;
        }

        void displayNumber(){
            cout << "the complex number is : " << a << " + " << b << "i" << endl;
        }
};

int main()
{
    Complex c1(4,6);
    c1.displayNumber();

    Complex c2(5);
    c2.displayNumber();

    Complex c3;
    c3.displayNumber();
    return 0;
}
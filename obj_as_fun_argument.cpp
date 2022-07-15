// Passing Objects as Function Arguments :

#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
    void setData(int r, int i){
        real = r;
        imaginary = i;
    }
    // objects as argument
    void addComplex(Complex obj1, Complex obj2){
        real = obj1.real + obj2.real;
        imaginary = obj1.imaginary + obj2.imaginary;
    }
    void displayData(){
        cout << "Complex Number : " << real << "+" << imaginary << "i"<<endl;
    }
};


int main()
{
    Complex c1, c2, c3;

    c1.setData(3,4);
    c1.displayData();

    c2.setData(6,2);
    c2.displayData();

    //here we passing object as argument
    c3.addComplex(c1, c2); //function calling
    c3.displayData();
    return 0;
}
#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
    public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int r, i;

    // Individually declaring function as friends
    // friend int Calculator::sumRealComplex(Complex, Complex);
    // friend int Calculator::sumCompComplex(Complex, Complex);

    //Aliter : Declaring the entire class as friend
    friend class Calculator;

public:
    void setNumber(int real, int imag)
    {
        r = real;
        i = imag;
    }
    void printNumber()
    {
        cout << "Complex Number : " << r << "+" << i << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.r + o2.r);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.i + o2.i);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(3,5);
    c2.setNumber(2,6);
    Calculator cal;
    int res_r = cal.sumRealComplex(c1, c2);
    cout << "Sum of real part of complex number: "<<res_r<<endl;
    int res_i = cal.sumCompComplex(c1, c2);
    cout << "Sum of imaginary part of complex number: "<<res_i<<endl;
    return 0;
}
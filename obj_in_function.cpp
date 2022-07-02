// Pointer to Object and passing object as argument and returning object.
/*Complex Number */

#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real;
    float imaginary;

public:
    // default constructor : we have to create this for comp3
    ComplexNumber()
    {
    }

    // parametrized constructor
    ComplexNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    // for displaying data
    void displayData()
    {
        cout << "Complex Number is : " << real << " + " << imaginary << "i" << endl
             << endl;
    }

    // since real and imaginary are private so to use this two variable we have to create a function which return them
    int getRealPart()
    {
        return real;
    }
    float getImaginaryPart()
    {
        return imaginary;
    }
};

// recieving object as arguments
ComplexNumber add2Number(ComplexNumber n1, ComplexNumber n2)
{
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart();
    // ComplexNumber temp(r, i);
    // return temp;
    return ComplexNumber(r, i);
}

int main()
{
    ComplexNumber comp1(5, 4), comp2(8, 7), comp3;
    comp1.displayData();
    comp2.displayData();
    cout << "Addition of comp1 and comp2 : " << endl;
    comp3 = add2Number(comp1, comp2); // passing object as an argument
    comp3.displayData();

    // pointer to an object
    cout << "Pointer to Object :" << endl;
    ComplexNumber *ptr1;
    ptr1 = &comp3;
    ptr1->displayData();

    // we can use the same to pointer to locate the address of another object
    ptr1 = &comp2;
    ptr1->displayData();

    // to check what ptr is storing
    cout << ptr1;
    return 0;
}
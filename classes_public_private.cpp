#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    //we can define a function either inside the class or outside of the class.
    void setData(int a1, int a2, int a3); //function declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int a2, int a3)
{
    a = a1;
    b = a2;
    c = a3;
}

int main()
{
    Employee ankit; // here ankit is an object (objects are nothing but variables of type class)
    // ankit.a = 76; // This will throw error as a is private, we cannot access the private thing directly
    ankit.d = 34; //since d & e is defined as public so we can access it directly from main
    ankit.e = 43;
    ankit.setData(23, 37, 45);
    ankit.getData();
    return 0;
}

// Recap OOPs :-

/*
OOPs - Classes and Objects

~ C++ --> initially called --> C with classes by stroustroup
~ class --. extension of structure (in C)
~ structures had limitations :-
    - members are public
    - No methods
~ classes --> structures + more
~ classes --> can have methods and properties
~ classes --> can have few members as private and few as public
~ structures in c++ are typedefed
~ you can declare objects along with the class declaation like this
    class Employee{
        //class definition
    }harry, ankit, singhji;
    singhji.IQ = 999 makes no sense if IQ is private...
*/
/*
// CODE WITH HARRY :
Inheritance in c++ - Overview

* Reusability is a very important feature of OOPs
* In C++ we can reuse a class and add additional features to it
* Reusing classes saves time and money
* Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.

What is Inheritance in C++

* The concept of Reusability in C++ is supported using Inheritance
* We can reuse the properties of an existing class by inherititing from it
* The existing class is called as the Base Class
* The new class which is inherited is called as the Derived Class
* Reusing classes saves time and money
* There are different types of inheritance in C++


SIMPLE SNIPPETS :::::

~~~Inheritance in C++

-> Inheritance allows us to define a class in terms of (from another) another class.
-> Provides REUSABILITY and MAINTAINABLITY of Code.
-> The idea of inheritance implements the IS-A relationship. For example : mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on.
-> The class from which the new class inherits properties (data members and member functions) is called BASE CLASS and the new created is called DERIVED CLASS.
-> Syntax - class derived-class : access-specifier case-class
            {
                // data members and member functions of derived class
            }
---> Types of Inheritance in C++ :-
1. Single level Inheritance
2. Multi level inheritance
3. Multiple inhertance
4. Hierachial inheritance
5. Hybrid inheritance

# Accessibility in Inheritance :-

example :

class base{
    public :
    int x;
    protected :
    int y;
    private :
    int z;
};
class publicDerived : public base
{
    // x is public
    // y is protected
    // z is not accessible from publicDerived
    // only x and y is accessible in 2nd derived class in as is it form
};
class protectedDerived : protected base
{
    // x is protected
    // y is protected
    // z is not accessible from protectedDerived
    // only x and y is accessible in 2nd derived class in protected form
};
class privateDerived : private base
{
    // x is private
    // y is private
    // z is not accessible from privateDerived
    // nothing is accessible in 2nd derived class
};

*/

// Example :

#include<iostream>
using namespace std;

// Base class
class Shape{
    protected :
    int width;
    int height;
    public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
};

// Derived class
class Rectangle : public Shape{
    public :
    int getArea(){
        return (width*height);
    }
};

int main()
{
    Rectangle rec;
    rec.setWidth(5);
    rec.setHeight(4);
    cout<<"Area of the rectangle : " << rec.getArea()<<endl;
    return 0;
}
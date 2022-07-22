/*
----->>> Functions Overrinding in C++ :-

-> If derived class defines same function as defined in its base class, it is known as function overrinding in C++.
-> If you create an object of the derived class and call the member function which exists in both classes (base and derived), the member function of the derived class is invoked and the function of the base class is ignored.
-> It enables you to provide specific implementation of the function which is already provides by its base class.

Example :-

class Base{
    ... . .. ...
    public :
        void getData(); // this function will be overriden by the function Derived class
        {
            .. ... . .. .
        }
};
class Derived : public Base{
    .. ... . .. .
    public :
        void getData(); // this function will called from main
        {
            ... .. . .. .
        }
};

int main(){
    Derived obj;
    obj.getData(); // this will call the function which is inside Derived class, it will call the function which is inside the Base class
}

Another example :- (if we want to use the function of base class also)

class Base{
    ... . .. ...
    public :
        void getData(); // this will be called from Derived class (2nd)
        {
            .. ... . .. .
        }
};
class Derived : public Base{
    .. ... . .. .
    public :
        void getData(); // firstly this function will be called (1st)
        {
            ... .. . .. .
            Base :: getData(); // then this will call the function which is inside Base class
            ... . .. . . ..
        }
};

int main(){
    Derived obj;
    obj.getData(); // this will call the function which is inside Derived class, it will not call the function which is inside the Base class
}
*/

#include<iostream>
using namespace std;

class Animal{
    public:
    void soundTest(){
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal{
    public :
    void soundTest(){
        cout << "Dog Barks" << endl;
        Animal :: soundTest(); // calling the function inside Animal class
    }
};

class Cat : public Animal{
    public :
    void soundTest(){
        cout << "Cat Meow" << endl;
    }
};

int main()
{
    Animal a;
    a.soundTest();
    Dog d;
    d.soundTest();
    Cat c;
    c.soundTest();
    return 0;
}
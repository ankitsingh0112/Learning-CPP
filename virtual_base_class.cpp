// Virtual Base Class :-
/*
Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a 
given class appearing in an inheritance hierarchy when using multiple inheritances. 

--> Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is 
inherited by two other classes B and C. Both these class are inherited into another in a new class D.

As we can see that data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error. 

To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual.

Syntax for Virtual Base Classes:

Syntax 1:
class B : virtual public A 
{
};

Syntax 2:
class C : public virtual A
{
};

Note: 
virtual can be written before or after the public. Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base.

*/

#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_roll(int a){
            roll_no = a;
        }
        void display_roll(void){
            cout << "Your roll number is : " << roll_no << endl;
        }
};

class Test : virtual public Student{
    protected :
        float maths, physics, bee, egd;
    public:
        void set_marks(float m1, float m2, float m3, float m4){
            maths = m1;
            physics = m2;
            bee = m3;
            egd = m4;
        }
        void display_marks(void){
            cout << "Marks obtained by you in class test : " << endl
                << "Maths : "<< maths << endl
                << "Physics : "<< physics << endl
                << "BEE : "<< bee << endl
                << "EGD : "<< egd << endl;
        }
};


class Sports : virtual public Student{
    protected :
        float sport;
    public :
        void set_score(float sc){
            sport = sc;
        }
        void display_score(void){
            cout << "Marks obtained by you in Sports : " << sport << endl;
        }
};

class Result : public Test, public Sports{
    private:
        float result;
    public:
        void display_result(void){
            result = maths + physics + bee + egd + sport;
            display_roll();
            display_marks();
            display_score();
            cout << "Your total score is : " << result << endl;
        }
};


int main()
{
    Result ankit;
    ankit.set_roll(42);
    ankit.set_marks(78.5, 88.5, 76.8, 89.5);
    ankit.set_score(8);
    ankit.display_result();
    return 0;
}
// Friend Function in C++ :- 

/*
~ What is Friend Function?

-> A friend function of a class is defined outside that class scope but it has the
right to access all private and protected members of the class.
-> Even though the prototypes for friend functions appear in the class definition, friends are not member functions.

~ Why do we need Friend function?

-> Special case when class's private data needs to be accessed directly without using
object of that class.
-> Operator overloading

*/

/*
--> Properties of Friend Functions :-

-> No tin the scope of class
-> Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
-> Can be invoked without the help of any object
-> Usually contains the objects as arguments
-> Can be declared inside public or private section of the class
-> It cannot access the members directly by their names and need object_name.member_name to access any member. 
*/


/*

// Example :- (Simple Sinpits)

#include<iostream>
using namespace std;

class Distance{
    private:
        int meters;
    public:
        Distance()
        {
            meters = 0;
        }
        void displayData(){
            cout << "Distance : "<<meters<<endl;
        }
        friend void addValue(Distance &d); //Function prototype
};

void addValue(Distance &d){
    d.meters = d.meters + 5;
}

int main()
{
    Distance d1;
    d1.displayData();

    //friend function call
    addValue(d1); // pass by reference
    d1.displayData();
    return 0;
}

*/


// Another Example :- (Code With Harry)

#include<iostream>
using namespace std;

class Complex{
    int r, i;
    // we can define friend function in private as well as in public
    // friend Complex sumComplex(Complex o1, Complex o2);
    public:
        void setNumber(int real, int imag){
            r =real;
            i = imag;
        }
        // Below line means that - sumComplex function is allowed to do anything with my private members
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout << "Complex Number : " << r << "+" << i << "i"<<endl;
        }
};

// without using friend function we cannot use private members of the class Complex, it will throw error
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.r + o2.r), (o1.i +o2.i));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(3,5);
    c1.printNumber();

    c2.setNumber(3,1);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
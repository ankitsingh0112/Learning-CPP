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
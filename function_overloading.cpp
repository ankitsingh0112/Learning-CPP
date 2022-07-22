#include<iostream>
using namespace std;

// Function Overloading : ---->  naam same but kaam different

/*
Functions Overloading in C++ :-

-> Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
-> Function overloading can be considered as an example of polymorphism feature in C++

Rules for Function Overloading :-

~An overloaded function must have :
-> Different type of parameters
-> Different number of parameters
-> Different sequence of parameters

example:
1. void print();
2. void print(int a);
3. void print(float a);
4. void print(int a, int b);
5. void print(int a, double b);
6. void print(double a, int b);
*/

//sum of two number
int sum(int a, int b){
    cout <<"Inside the function with 2 arguments" <<endl;
    return a+b;
}

//sum of three number
int sum(int a, int b, int c){
    cout << "Inside the function with 3 arguments" <<endl;
    return a+b+c;
}

// volume of cuboid
int volume(int l, int b, int h){
    cout<<"Inside cuboid" << endl;
    return (l*b*h);
}

// volume of cube
int volume(int a){
    cout<<"Inside cube" << endl;
    return (a*a*a);
}

//voulme of cyliner
int volume(int r, int h){
    cout<<"Inside cylinder" << endl;
    return (3.14*r*r*h);
}

int main()
{
    cout<<"Sum of 3 and 8 is : " << sum(3, 8) << endl;
    cout<<"Sum of 3, 8 and 9 is : " << sum(3, 8, 9) << endl;
    cout<<"Volume of cuboid of side 3, 2 and 4 : " << volume(3,2,4)<<endl;
    cout<<"Volume of cube of side 3 : " << volume(3)<<endl;
    cout<<"Volume of cylinder of radius 2 and height 4 : " << volume(2, 4)<<endl;
    return 0;
}
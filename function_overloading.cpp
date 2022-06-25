#include<iostream>
using namespace std;

// Function Overloading : ---->  naam same but kaam different

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
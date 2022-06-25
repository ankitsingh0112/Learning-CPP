#include<iostream>  //header file
using namespace std;    //namespace (not recommended to use)
#define PI 3.14     //defining something
int r = 2;      //global variable decleration

void area();    //function prototype

class MyClass   //class
{
    public :    //access specifier
    int a;
    void display()  //function inside class
    {
        cout<<"Inside Class :" << endl;
    }
};

int main()
{
    MyClass m;  //defining class
    m.a = 90;   //putting data in class
    m.display();    //calling class function
    area(); //calling function
    cout << "Inside main function :" << endl;
    cout << m.a <<endl;     //printing class memeber
    return 0; 
}

void area()     //function definition
{
    int area = PI*r*r;
    cout << "AREA = " << area << endl;
}
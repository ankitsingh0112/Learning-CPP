/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a 
class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
    public:
    void area(int a, int b, int c){
        double s = (a+b+c)/2.0;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of the triangle : "<<area<<endl;
    }
    void perimeter(int a, int b, int c){
        cout<<"Perimeter of the triangle : "<<(a+b+c)<<endl;
    }
};

int main()
{
    Triangle t;
    t.area(3,4,5);
    t.perimeter(3,4,5);
    return 0;
}
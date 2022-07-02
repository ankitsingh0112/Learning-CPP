/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a 
class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as 
parameters to its constructor.*/

#include<iostream>
using namespace std;

class Rectangle{
    private:
    int l, b;
    public:
    Rectangle(int s1, int s2){
        l = s1;
        b = s2;
    }
    int area(){
        return (l*b);
    }
};

int main()
{
    Rectangle r1(4,5), r2(5,8);
    cout<<"Area of Rec-1 : "<<r1.area()<<endl;
    cout<<"Area of Rec-2 : "<<r2.area()<<endl;
    return 0;
}
/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a
class named 'Triangle' with the constructor having the three sides as its parameters.*/

#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
private:
    int a, b, c;

public:
    Triangle(int s1, int s2, int s3)
    {
        a = s1;
        b = s2;
        c = s3;
    }
    void area()
    {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of the Triangle : " << area << endl;
    }
    void perimeter()
    {
        cout << "Perimeter of the Triangle : " << (a + b + c) << endl;
    }
};

int main()
{
    Triangle t(3, 4, 5);
    t.area();
    t.perimeter();
    return 0;
}
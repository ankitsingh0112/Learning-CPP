/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First 
function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function 
named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/

#include<iostream>
using namespace std;

class Area{
    private:
    int l, b;
    public:
    void setDim(int s1, int s2){
        l = s1;
        b = s2;
    }
    int getArea(){
        return l*b;
    }
};

int main()
{
    Area a;
    int s1, s2;
    cout<<"Enter the dimension of the rectangle : "<<endl;
    cin>>s1>>s2;
    a.setDim(s1,s2);
    cout<<"Area : "<<a.getArea()<<endl;
    return 0;
}
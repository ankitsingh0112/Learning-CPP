#include<iostream>
using namespace std;

// Forward declararion is needed because we are using class Y in class X
class Y;

class X{
    int num1;
    public:
    void setValue(int val){
        num1 = val;
    }
    friend void add(X, Y);
};

class Y{
    int num2;
    friend void add(X, Y);
    public:
    void setValue(int val){
        num2 = val;
    }
};

void add(X a, Y b){
    cout << "Sum of X and Y object : " << a.num1+b.num2;
}

int main()
{
    X o1;
    Y o2;
    o1.setValue(10);
    o2.setValue(12);
    add(o1, o2);
    return 0;
}
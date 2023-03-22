#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
/*
class normal_calc{
    protected:
    int add, sub, mul, div;
    public:
    void add(int a, int b){
        add = a+b;
    }
    void sub(int a, int b){
        sub = a-b;
    }
    void mul(int a, int b){
        mul = a*b;
    }
    void div(int a, int b){
        div = a/b;
    }
};*/

class sci_fi_calc{
    protected:
    float sin, c, tan, fact = 1;
    public:
    void sin_cal(float deg){
        sin = deg*3.14/180;
        cout << sin;
    }
    void cos_cal(float deg){
        c = cos(deg*3.14/180);
        cout << c;
    }

};


int main()
{
    sci_fi_calc obj;
    cout<<"value";
    obj.sin_cal(90);
    cout<<endl;
    obj.cos_cal(45);

    return 0;
}
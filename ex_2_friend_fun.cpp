#include<iostream>
using namespace std;

class c2;

class c1{
    int n1;
    friend void swap(c1 &x, c2 &y);
    public:
        void value(int a){
            n1 = a;
        }
        void dispaly(void){
            cout << n1 << endl;
        }
};

class c2{
    int n2;
    friend void swap(c1 &x, c2 &y);
    public:
        void value(int a){
            n2 = a;
        }
        void dispaly(void){
            cout << n2 << endl;
        }
};

void swap(c1 &x, c2 &y){
    int temp = x.n1;
    x.n1 = y.n2;
    y.n2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.value(13);
    o2.value(45);
    swap(o1, o2);
    cout<<"After swapping c1 : ";
    o1.dispaly();
    cout<<"After swapping c2 : ";
    o2.dispaly();
    return 0;
}
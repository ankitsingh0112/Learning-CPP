#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout << "Good Morning"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout << "Good Night"<<endl;
        }
};


class Derived : public Base1 , public Base2{
    int a;
    public:
    // iss trah se hm ambiguity ko resolve krte hai but in case derived class me same naam ka fumction available to abiguity resolve krne ki jrurt nhi khud b khud wo derived class ke function ko run kr dega....
    // void greet(){
    //     Base2 :: greet();
    // }
    void greet(){
        cout << "Hii"<<endl;
    }
};


class B{
    public:
    void say(){
        cout<<"Kaise Ho?"<<endl;
    }
};

class D : public B{
    public:
    void say(){
        cout<<"Maze me Hai..."<<endl;
    }
};

int main()
{
    // Ambiuitity 1
    Base1 b1;
    b1.greet();   
    Base2 b2;
    b2.greet();   
    Derived d;
    d.greet();

    // Ambiuitity 2 // yeha pr abiguity khud-b-khud resolve ho jaati hai
    // B b;
    // b.say();
    // D d;
    // d.say();
    return 0;
}
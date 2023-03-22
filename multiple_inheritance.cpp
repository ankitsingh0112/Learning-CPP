#include<iostream>
using namespace std;

/*
syntax for inheriting multiple inhertance :
class derived : visibility-mode base1, visibility-mode base2
{
    class body of class derived;
};
*/

class base1{
    protected:
    int base1int;
    public:
    void set_base1(int a){
        base1int = a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2(int a){
        base2int = a;
    }
};

class derived : public base1 , public base2{
    public:
    void show(){
        cout << "Value of base1 : "<<base1int<<endl;
        cout << "Value of base2 : "<<base2int<<endl;
        cout << "Value of base1+base2 : "<<base1int+base2int<<endl;
    }
};

/*
The inherited derived class will look something like this :

Data Member :
    base1int ---> protected
    base2int ---> protected
Member Function
    base1 ---> public
    base2 ---> public
*/


int main()
{
    derived obj;
    obj.set_base1(12);  
    obj.set_base2(13);  
    obj.show();  
    return 0;
}
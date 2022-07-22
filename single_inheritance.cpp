#include<iostream>
using namespace std;

class Base{
    int data1; // private by default
    public :
    int data2;
    void setData();
    int getData1(); // this function is get inheritated becuse with the help this function we able to use the private members of the class Base
    // void getData2();
};
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(void){
    return data1;
}

// class Derived : public Base
// if we change this to private then we are not able to access the member function of class Base Outside
// so access this we to put that function inside the member function of derived class
class Derived : private Base
{
    int data3;
    public:
    void processData(){
        setData();
        data3 = data2 * getData1();
    }
    void displayData(){
        cout << "Value of data-1 : " << getData1() <<endl;
        cout << "Value of data-2 : " << data2 <<endl;
        cout << "Value of data-3 : " << data3 <<endl;
    }
};
int main()
{
    Derived d;
    // d.setData(); // this will throw error bcoz setData is now private
    // to use this put setData inside process function(or any any memeber function of derived class which is public / according to your program put the setData inside function)
    d.processData();
    d.displayData();
    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    Base()
    {
        x = 9;
        y = 0;
        z = 0;
    }
    void printProtectedData(){
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl; // only from own class private member can be accesed
    }

protected:
    int y;

private:
    int z;
};

class Derived : public Base{
    /*
    when derived is public :
    public int x;
    protected int y;

    when derived is protected :
    // x and y becomes protected so this'll be now not accessible
    protected int x;
    protected int y;

    when derived is private :
    // nothing is accessible
    private int x;
    private int y;
    */
};

void outsideClass(Base obj)
{
    cout << "X : " << obj.x << endl; // data member of class Base is directly accessed by the function because it was public....
    // cout << "Y : " << obj.y << endl; // this is not accessible  directly bcoz it is protected
    
    // for accessing protected data we can create a function inside a class
    obj.printProtectedData(); // this way we can access the protected data

    // cout << "Z : " << obj.z <<endl; // this is also not accessible bcoz it is private
}

int main()
{
    Base obj;
    
    // accessing class members using function
    // outsideClass(obj);

    // accessing class members using derived class
    Derived obj1;
    cout << "X : " << obj1.x <<endl;
    obj1.printProtectedData();
    return 0;
}
// Notes availabe at bottom!!!

#include <iostream>
#include <string>
using namespace std;

class Laptop
{
private:
    // member variables or data member
    string company_name;
    string model_name;
    int btry_backup;
    float rating;
    double price;

public:
    // default constructor
    Laptop()
    {
        // checking is really constructor get created
        cout<<"Default constructor is called"<<endl;

        company_name = "HP";
    }

    // parameterized constructor
    Laptop(string c_name, string mname, int b_backup, float r, double p)
    {
        cout<<"Parameterized constructor is called"<<endl;
        company_name = c_name;
        model_name = mname;
        btry_backup = b_backup;
        rating = r;
        price = p;
    }

    Laptop(Laptop &obj)
    {
        cout<<"Copy constructor is called"<<endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        btry_backup = obj.btry_backup;
        rating = obj.rating;
        price = obj.price;
    }

    void setData(string mname, int b_backup, float r, double p);

    void displayData()
    {
        cout << "\tLaptop :-" << endl
             << endl;
        cout << "Company Name :- " << company_name << endl;
        cout << "Model Name :- " << model_name << endl;
        cout << "Battery Backup :- " << btry_backup << endl;
        cout << "Rating :- " << rating << endl;
        cout << "Price :- " << price << endl << endl;
    }

    // destructor
    // in this we don't need destructor, it isgennerally needed when we dynamically locates the memory
    ~Laptop()
    {
        cout<<"Destructor called"<<endl;
        //since its printing 3 times because the constructor is called 3 times 
    }
};

void Laptop::setData(string mname, int b_backup, float r, double p)
{
    model_name = mname;
    btry_backup = b_backup;
    rating = r;
    price = p;
}

int main()
{
    Laptop lappi1; // when create a obj then the default constructor created by compiler automatically
    Laptop lappi2("hp", "Pavillion 15 Gaming", 6, 4.6, 60000); // when we create parametrized constructor then we have to pass the value as an argument
    lappi1.setData("Pavillion 15", 8, 4.8, 56000);
    lappi1.displayData();
    lappi2.displayData();
    Laptop lappi3 = lappi1;
    lappi3.displayData();
    return 0;
}


// Constructors in C++ :-
/* 
--> What is a Constructor?

>> A constructor is a member funcion of a class which intializes objects of a class. In C++,
Constructors is automatically when object(instance of class) is created. It is special member function of the class.

-->How contructors are different from a normal member function?

A constructor is different from normal function in following ways:
>> Constructor has same name as the class itself
>> Constructors don't have return type
>> A constructor is automatically called when an object is created.
>> If we do not specify a constructor, C++ compiler generates a default constructor for us(excepts no parametes and has an empty body).

--> Types of constructors?

1.) Default Constructors : Default constructor is the constructor which doesn't take any argument.
It has no parameters.

2.) Parameterized Constructors : Is is possible to pass arguments to constructors. Typically, these
arguments help initalize an object when it is created. To create a parameterized constructor, 
simply add parameter to it, the way you do to any other function. When you define the constructor's body, use the parameters to initalize the object.

3.) Copy Constructos: A copy constructor is a member function which initalizes an object using another object of the same class.
*/

// Destructors in C++ :-
/*
--> What is Destructor?

>> Destructor is member function which destructs or deletes an object.

--> When is destructor called?

>> The function ends.
>> The program ends.
>> A block containing local variables ends.
>> A delete operator is called.

--> How destructors are different from a normal member function?

>> Destructors have same name as the class preceded by a tilde(~).
>> Destructors don't take any argument and don't return anything(not even void).

--> Can there be more than one destructor in a class?

>> no, there can only one destructor in a clss with class_name preceded by ~, no parameters and no return type.

NOTE :- Generally we don't use destructors in our program it is by default but when we allocates memory dynamically or use pointer in class then we have to use destructors.

--> When do we need to write a user-defined destructor?

>> If we do not write own destructor in class, complier creates a default destructor for us. 
The default destructor works fine unless we have dynamically allocated memory or pointer in class.
When a class contains a pointer to memory allocated in class, we should write a destructor to 
release memory before the class instance is destroyed. This must be done to avoid memory leak.
*/
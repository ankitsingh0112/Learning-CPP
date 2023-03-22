/*
Encapsulation : Wrapping up data member & function in a single unit.

"The process of grouping data members and corresponding methods into a single unit is known as 
Encapsulation. It is an important part of object-oriented programming. We can create a fully encapsulated 
class by making all the data members private. If the data members are private, it can only be accessible 
within the class; no other class can access that class’s data members. "

"data hiding / information hiding can be achieved using encapsulation"

>> Fully Encapsulated class : if all the data members are marked private then that class is called 
fully encapsulated class.

Advantage : 
> Encapsulation is a way to achieve data hiding because other classes will not be able to access the data 
through the private data members.
> In Encapsulation, we can hide the data’s internal information, which is better for security concerns.
> By encapsulation, we can make the class read-only. The code reusability is also an advantage of 
encapsulation.
> Encapsulated code is better for unit testing.
*/

// Example:-

#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
        int salary;
    public:
        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }    
};

int main()
{
    Employee e1;
    e1.setName("Ankit");
    cout << e1.getName() << endl;
    return 0;
}
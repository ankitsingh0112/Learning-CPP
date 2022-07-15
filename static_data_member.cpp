#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; // static generally holds its previous value
    public:
        void setData(void){
            cout<<"Enter the ID : "<<endl;
            cin>>id;
            count++;
        }
        void displayData(void){
            cout<<"ID of the employee is : "<< id << " and the number is : " <<count<<endl;
        }
        // Static Function :-
        // static function is used when we do not want to create an object of a class
        static void getCount(void){
            // static variable or static function have only access to static variable or static function not any other variable or function
            // cout << id; //this will throw error
            cout << "Total number of count : " << count << endl;
        }
};

// count id the static data member of the class Employee
// int Employee:: count; // default value is 0
// if we want to initalize the count value with 100 then we do this :
int Employee :: count = 100;

int main()
{
    Employee Ankit, Aditya, Gaurav;
    // Ankit.id = 1;
    // Ankit.count = 1; // cannot do this as id and count are private(by default)

    Ankit.setData();
    Ankit.displayData();
    Aditya.setData();
    Aditya.displayData();
    Gaurav.setData();
    Gaurav.displayData();

    Employee::getCount();
    return 0;
}
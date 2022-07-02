/* Assign and print the roll number, phone number and address of two students having names "Sam" and "John" 
respectively by creating two objects of the class 'Student'.*/

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int roll_no;
    long long int phone_no;
    string address;

    void displayData(){
        cout<<"Roll No. :" << roll_no<<endl;
        cout<<"Phone No. :" << phone_no<<endl;
        cout<<"Address :" << address<<endl<<endl;
    }
};

int main()
{
    Student s1, s2;
    s1.roll_no = 1;
    s1.phone_no = 6598423015;  
    s1.address = "13-Tokyo street, Japan";
    s2.roll_no = 2;
    s2.phone_no = 9658423152;
    s2.address = "12-Palampur, India";
    cout<<"Details of Sam :-"<<endl<<endl;
    s1.displayData();
    cout<<"Details of John :-"<<endl<<endl;
    s2.displayData();
    return 0;
}
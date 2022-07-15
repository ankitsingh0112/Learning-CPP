// Array of Objects

#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 10000;
        cout <<"Enter the id of employee :";
        cin>> id;
    }
    void displayData(void){
        cout<<"The id of this employee is : "<< id<<endl;
    }
};


int main()
{
    Employee walmart[10];
    int n;
    cout<<"Enter the nuumber of employee : ";
    cin >> n;
    cout << "Enter the ids of the employees : "<<endl;
    for(int i = 0; i < n; i++)
    {
        walmart[i].setId();
        walmart[i].displayData();
    }
    return 0;
}
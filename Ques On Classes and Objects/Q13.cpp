/*Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours. */

#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;
    int work_hour;

public:
    void getInfo(int s, int w_h)
    {
        salary = s;
        work_hour = w_h;
    }
    void AddSal()
    {
        if (salary <= 500)
        {
            salary += 10;
            cout<<"You are getting less paid :("<<endl;
        cout << "Your increased salary is " << salary << endl<<endl;;
        }
        else{
            cout<<"You're earning more than $500 so no increament in your salary accoring to your payment"<<endl<<endl;
        }
    }
    void AddWork()
    {
        if (work_hour >= 6)
        {
            salary += 5;
            cout<<"You are getting less paid according to your working hour :("<<endl;
        cout << "Your increased salary is " << salary << endl<<endl;
        }
        else{
            cout<<"You're working less than 6 hours so no increament in your salary according to your working hour"<<endl;
        }
    }
};

int main()
{
    Employee e1;
    int s, w_h;
    cin >> s >> w_h;
    e1.getInfo(s, w_h);
    e1.AddSal();
    e1.AddWork();
    return 0;
}
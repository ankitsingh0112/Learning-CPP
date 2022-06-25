/*Write a program to calculate the total salary of a person.
The user has to enter the basic salary (an integer) and
the grade (an uppercase character), and depending upon which the total
salary is calculated as -
    totalSalary = basic + hra + da + allow – pf

    where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so

Input format :
Basic salary & Grade (separated by space)
Output Format :
Total Salary
Constraints :
0 <= Basic Salary <= 7,500,000


*/

#include <iostream>
using namespace std;

int main()
{
    char grade;
    int basic_salary;
    int allow;
    cout << "Enter your Basic Salary (0 <= basic salary <= 7,500,000) and Grade ('A', 'B' or 'C'): " << endl;
    cin >> basic_salary >> grade;
    float hra = 20.0 / 100 * basic_salary;
    float da = 50.0 / 100 * basic_salary;
    float pf = 11.0 / 100 * basic_salary;
    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else if (grade == 'C')
        allow = 1300;
    int total_salary = basic_salary + hra + da + allow - pf;
    cout << "Your Total Salary : " << total_salary << endl;
}
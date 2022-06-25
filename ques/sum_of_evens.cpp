//Given a number N, print sum of all even numbers from 1 to N.

#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0, i = 2;
    cout << "Enter the number : ";
    cin >> num;
    while (i <= num)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "sum of even numbers : " << sum << endl;
    
    return 0;
}
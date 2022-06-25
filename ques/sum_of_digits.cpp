// Find sum of digits of a number. Say N = 3467, Output = 3 + 4 + 6 + 7 = 20

#include<iostream>
using namespace std;

int main()
{
    int num, remain, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num > 0)
    {
        remain = num % 10;
        sum = sum + remain;
        num /= 10;
    }
    cout << "Sum of the digit is : " << sum;
    return 0;
}
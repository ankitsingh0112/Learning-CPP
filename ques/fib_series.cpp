/*
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2),
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
Integer n
Output Format :
Nth Fibonacci term i.e. F(n)
Constraints:
1 <= n <= 25
Sample Input 1:
4
Sample Output 1:
3
Sample Input 1:
6
Sample Output 2:
8
*/

#include <iostream>
using namespace std;

int main()
{
    int pos, num;
    cout << "Enter the position of fibonacci series : ";
    cin >> pos;
    num = pos;
    if(pos % 2 == 0)
        pos /= 2;
    else
        pos =  (pos/2) + 1;
    int pre_num = 0;
    int current_num = 1;
    for (int i = 0; i < pos; i++)
    {
        pre_num = pre_num + current_num;
        current_num = current_num + pre_num;
    }
    if (num % 2 == 0)
        cout << pre_num << endl;
    else
        cout << current_num << endl;
    return 0;
}
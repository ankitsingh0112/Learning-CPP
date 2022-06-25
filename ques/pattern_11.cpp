/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << count + i;
            count = count - 1;
        }
        cout << endl;
    }
}
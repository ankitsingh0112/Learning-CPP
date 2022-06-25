/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
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
        int p = rows - i;
        for (int j = rows; j > (rows - i); j--)
        {
            char ch = 'A' + p;
            cout << ch;
            p++;
        }
        cout << endl;
    }
    return 0;
}
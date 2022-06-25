/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;
    //Logic
    char ch = 'A';
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char c = ch + j;
            cout << c;
        }
        ++ch;
        cout << endl;
    }
    
    return 0;
}
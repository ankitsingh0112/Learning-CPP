/*
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    char ch = 'A';
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    
    return 0;
}
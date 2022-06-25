/*
ABCD
BCDE
CDEF
DEFG
*/

#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        int p = i;
        for (int j = 1; j <= rows; j++)
        {
            char ch = 'A' + p - 1;
            cout << ch;
            ++p;
        }
        cout << endl;
    }
    
    return 0;
}
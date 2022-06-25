/*
ABCD
ABCD
ABCD
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    //Logic
    for (int i = 1; i <= rows; i++)
    {
        // char ch = 'A';
        for (int j = 1; j <= rows; j++)
        {
            //another logic
            char ch = 'A' + j - 1;
            cout << ch;
            // cout << ch;
            // ch = ch + 1;
        }
        cout << endl;
    }
    
    return 0;
}
/*
4321
4321
4321
4321
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    //Logic
    for (int i = 1; i <= rows; i++) //for number of rows
    {
        // int count = rows;
        for (int j = 1; j <= rows; j++) //for number of columns
        {
            cout << rows - j + 1; //logic
            // cout << count;   //another logic
            // count--;
        }
        cout << endl;
    }
    
}
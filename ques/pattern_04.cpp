/*
1
23
345
4567
56789
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;
    // int count = 0;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        int p = i;
        for (int j = 1; j <= i; j++)
        {
            // cout << count+j; //logic
            cout << p; // another logic
            p++;
        }
        // ++count;
        cout << endl;
    }
    return 0;
}
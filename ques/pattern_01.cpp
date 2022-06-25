/*
1
12
123
1234
*/

#include <iostream>
using namespace std;

int main()
{
    int rows, i = 1;
    cout << "Enter the number of rows : ";
    cin >> rows;
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
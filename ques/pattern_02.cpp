/*
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int rows, i = 1, count = 1;
    cout << "Enter the number of rows : ";
    cin >> rows;
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
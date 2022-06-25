// 1
// 11
// 111
// 1001
// 11111
// 100001

// Explaination :
// all the even rows are ended with 1 and in the middle it is 0;

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        if (row % 2 != 0)
        {
            // odd row
            while (col <= row)
            {
                cout << 1;
                col++;
            }
        }
        else
        {
            // even row
            cout << 1;
            while (col <= row - 2)
            {
                cout << 0;
                col++;
            }
            cout << 1;
        }
        cout << endl;
        row++;
    }
    return 0;
}
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
    int count = 0;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << count + k;
        }
        count++;
        cout << endl;
    }
    return 0;
}
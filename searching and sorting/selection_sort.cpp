// Selection Sort --->

// Time complexity -> O(n^2)
// Explanation :- We can analyze the complexity by simply observing the number of loops. There are 2 loops so the complexity is n*n = n^2.

// Algorithm -->
// find the smallest element and then swap the smallest element with the starting element and then in next round leave the first element and find the smallest element again and then swap, do this untill the array is sorted.
/*
    for example :- 54 67 32 98 47

    Round - 1 : 32 67 54 98 47
    Round - 2 : 32 47 54 98 67
    Round - 3 : 32 47 54 98 67
    Round - 4 : 32 47 54 67 98
*/

#include <iostream>
#define N 10
using namespace std;

void print_array(int arr[], int n);
void selection_sort(int arr[], int n);

// Driver Code
int main()
{
    int arr[N], n;
    cout << "Enter the number of elements of the array : ";
    cin >> n;
    cout << "Input the array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Before sorting :" << endl;
    print_array(arr, n);
    selection_sort(arr, n);
    cout << "After Sorting :" << endl;
    print_array(arr, n);
    return 0;
}

// For Printing Array
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Logic for selection sort
void selection_sort(int arr[], int n)
{
    int min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            // finding minimum element in the array
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        // placing minimum at the correct position by swapping
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        // checking after each round how selection sort is working...
        cout << "After round :"<<i+1 << endl;
        print_array(arr, n);
    }
}
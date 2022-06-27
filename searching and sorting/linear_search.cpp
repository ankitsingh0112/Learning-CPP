// Time complexity for linear search is O(n)...

#include<iostream>
#define N 20
using namespace std;

void linear_search(int a[], int k, int n); //function prototype

int main()
{
    int arr[N], n, key;
    cout << "Enter the number of elements you want to store in the array : ";
    cin >> n;
    cout <<"Input the elements :"<<endl;
    // taking inputs
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key you want to find : ";
    cin >> key;
    linear_search(arr, key, n); //function calling
    return 0;
}

//Logic
void linear_search(int a[], int k, int n) //function definition
{
    bool b = false;
    // here loop will run for n number of times that's why time complexity will be O(n).
    for (int i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            b = true;
            cout<<"We found the key at location : "<<i+1<<endl;
            break;
        }
    }
    if (b == false)
    {
        cout<<"Key is not present in the given array!"<<endl;
    }
}
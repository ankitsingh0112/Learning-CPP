#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n, arr[10];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Input the elements of the array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // logic
    // by using inbuilt library function
    /*
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout<<"Max no. is "<<maxNo<<endl<< "Min no. is " << minNo<<endl;
    */


    //logic
    //by own method
    int maxNo = arr[0];
    int minNo = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxNo)
            maxNo = arr[i];
        if(arr[i] < minNo)
            minNo = arr[i];
    }
    cout<<"Max no. is "<<maxNo<<endl<< "Min no. is " << minNo<<endl;
    
    return 0;
}
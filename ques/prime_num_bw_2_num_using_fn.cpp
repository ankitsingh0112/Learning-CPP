#include<iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num/2; i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cout<<"Enter the two number : " << endl;
    cin>>a>>b;
    cout<<"Prime number b/w " <<a << " and "<<b<<" is "<<endl;
    for (int i = a; i < b; i++)
    {
        if(isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
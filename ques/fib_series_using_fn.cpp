#include<iostream>
using namespace std;

void fib_series(int n);

int main()
{
    int n;
    cout<<"Enter the position : ";
    cin>>n;
    fib_series(n);
}

void fib_series(int n){
    int pt = 0, ct = 1, nt;
    cout<<pt<<"\t"<<ct;
    for (int i = 1; i <= (n-2); i++)
    {
        nt = pt+ct;
        cout<<"\t"<<nt;
        pt = ct;
        ct = nt;
    }
}
//c++ program to check whether a character is vowel or consonant.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Input a alphabet : ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i'  || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << ch << " is Vowel." << endl;
    else
        cout << ch << " is Consonant." << endl;
    return 0;
}
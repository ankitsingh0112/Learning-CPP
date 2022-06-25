#include <iostream>
using namespace std;

int main()
{
    char word[20] = "gOOd mORning";
    // cout << "Enter the word : ";
    // cin >> word;
    
    //Logic --->
    int i = 0;
    while (word[i] != '\0')
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] = word[i] - 32;
        else if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] = word[i] + 32;
        i++;
    }
    cout << word;
    return 0;
}
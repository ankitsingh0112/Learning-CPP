#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
    string s;
    void chk_bin(void); //if we make this private then we cannot access it from main function

public:
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a string to check whether it is binary or not" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Non-binary String" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin(); // Nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); //this will be throw error bcoz chk_bin is now made private
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
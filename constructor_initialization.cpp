#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float rate;
    int returnVal;

public:
    BankDeposite() {}


    BankDeposite(int p, int y, int r) // here r can be 4(int)
    {
        principal = p;
        years = y;
        rate = float(r) / 100;
        returnVal = principal;
        for (int i = 0; i < y; i++)
        {
            returnVal = returnVal * (1 + rate);
        }
    }

    BankDeposite(int p, int y, float r) // r can be 0.04
    {
        principal = p;
        years = y;
        rate = r;
        returnVal = principal;
        for (int i = 0; i < y; i++)
        {
            returnVal = returnVal * (1 + rate);
        }
    }
    void show()
    {
        cout << "Principal Amount : " << principal << endl
             << "Return Amount : " << returnVal << endl;
    }
};

int main()
{
    BankDeposite b1, b2, b3;
    int p, t, R;
    float r;
    cout << "Enter P, T and R(int) " << endl;
    cin >> p >> t >> R;
    b1 = BankDeposite(p, t, R);
    b1.show();

    cout << "Enter the value of p T and R(float)" << endl;
    cin >> p >> t >> r;
    b2 = BankDeposite(p, t, r);
    b2.show();
    return 0;
}
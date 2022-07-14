/*Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the
average without creating any object of the Average class.*/

/*
Solve the same ques using friend function
*/

#include <iostream>
using namespace std;
class Average
{
public:
    // by using static we can solve this problem
    static float calcAverage(float a, float b, float c)
    {
        return (a + b + c) / 3;
    }
};

int main()
{
    cout << "Enter three numbers: ";
    float a, b, c;
    cin >> a >> b >> c;
    cout << "The average is: " << Average::calcAverage(a, b, c) << endl;
    return 0;
}

// BY USING FRIEND FUNCTION :-

/*
#include<iostream>
using namespace std;

class Average{
    private:
        int a, b, c;
    public:
        float avg;
        void setData(int n1, int n2, int n3){
            a = n1;
            b = n2;
            c = n3;
        }

        void displayData(){
            cout << "Average : "<< avg;
        }
    friend void findAvg(Average &A);
};

void findAvg(Average &A){
    A.avg = (A.a + A.b + A.c)/3.0;
}

int main()
{
    Average A1;
    int n1, n2,n3;
    cin>>n1>>n2>>n3;
    A1.setData(n1,n2,n3);
    findAvg(A1);
    A1.displayData();
    return 0;
}
*/
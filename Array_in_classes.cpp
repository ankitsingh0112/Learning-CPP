// Array in classes

#include <iostream>
using namespace std;

class School
{
    //by default all the members are private
    int reg_no[10];
    int marks[10];
    int roll;

public:
    void initroll()
    {
        roll = 0;
    }
    void setMarks();
    void displayMarks();
};

void School ::setMarks()
{
    cout << "Enter the registration number of roll no. " << roll + 1 << ": " << endl;
    cin >> reg_no[roll];
    cout << "Enter the marks of " << reg_no[roll] << ": " << endl;
    cin >> marks[roll];
    roll++;
}

void School ::displayMarks()
{
    for (int i = 0; i < roll; i++)
    {
        cout << "Marks of registration no. " << reg_no[i] << " is " << marks[i] << endl;
    }
}

int main()
{
    School c_room;
    c_room.initroll();
    int n;
    cout << "Enter the number of student : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        c_room.setMarks();
    }
    c_room.displayMarks();
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number(); // this function is from class Student
        get_marks();    // this function is from class Exam
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

/*
Note : 
    We are inhering Exam from Student and Result from Exam[ Student--->Exam--->Result ]
    Student is the base class for Exam and Exam is the base class for Result.
*/


int main()
{
    Result harry;   // creating a obj of 2nd derived class
    // using the function/members of the parent class in the derived class
    harry.set_roll_number(420); 
    harry.set_marks(94.0, 90.0);
    harry.display_results();
    return 0;
}

// for detail explaination : https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-40/
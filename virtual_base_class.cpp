#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_roll(int a){
            roll_no = a;
        }
        void display_roll(void){
            cout << "Your roll number is : " << roll_no << endl;
        }
};

class Test : virtual public Student{
    protected :
        float maths, physics, bee, egd;
    public:
        void set_marks(float m1, float m2, float m3, float m4){
            maths = m1;
            physics = m2;
            bee = m3;
            egd = m4;
        }
        void display_marks(void){
            cout << "Marks obtained by you in class test : " << endl
                << "Maths : "<< maths << endl
                << "Physics : "<< physics << endl
                << "BEE : "<< bee << endl
                << "EGD : "<< egd << endl;
        }
};


class Sports : virtual public Student{
    protected :
        float sport;
    public :
        void set_score(float sc){
            sport = sc;
        }
        void display_score(void){
            cout << "Marks obtained by you in Sports : " << sport << endl;
        }
};

class Result : public Test, public Sports{
    private:
        float result;
    public:
        void display_result(void){
            result = maths + physics + bee + egd + sport;
            display_roll();
            display_marks();
            display_score();
            cout << "Your total score is : " << result << endl;
        }
};


int main()
{
    Result ankit;
    ankit.set_roll(42);
    ankit.set_marks(78.5, 88.5, 76.8, 89.5);
    ankit.set_score(8);
    ankit.display_result();
    return 0;
}
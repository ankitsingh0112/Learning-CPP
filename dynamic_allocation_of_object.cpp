#include<iostream>
using namespace std;

class Hero{
    private:
        int health;
    public:
        char level;

        // creating a getter and setter for accessing the private data member
        int getHealth() {
            return health;
        }
        void setHealth(int h) {
            health = h;
        }
};

int main() {
    // Static alloction :-
    Hero h1;
    h1.setHealth(70);
    h1.level = 'A';
    cout << "Size of h1 : " << sizeof(h1) << endl;
    cout << "Health is : " << h1.getHealth() << endl;
    cout << "Level is : " << h1.level << endl;

    // Dynamic allocation :-
    Hero *h2 = new Hero;
    h2->setHealth(80);
    h2->level = 'B';
    cout << "Size of h2 : " << sizeof(*h2) << endl;
    cout << "Health is : " << h2->getHealth() << endl;
    cout << "Level is : " << h2->level << endl;

    // another way to write
    cout << "Size of h2 : " << sizeof(*h2) << endl;
    cout << "Health is : " << (*h2).getHealth() << endl;
    cout << "Level is : " << (*h2).level << endl;
}
// Create a function which takes 2 point objects and computes the distance between those 2 points


#include<iostream>
#include<cmath>
using namespace std;

class Points{
    private:
    int x, y, dist;

    public:
    //Parameterized Constructor : 
        Points(int a, int b){
            x = a;
            y = b;
    }

    friend float calculateDistance(Points, Points);
};

float calculateDistance(Points p1, Points p2){
    float dist = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
    return dist;
}


int main()
{
    Points p1(1,0), p2(70,0);
    float res = calculateDistance(p1, p2);
    cout << res;
    return 0;
}
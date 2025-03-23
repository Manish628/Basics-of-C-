#include<iostream>
using namespace std;
class distance
{
    int feet,inches;
    public:
    distance()
    {
        feet=0;
        inches=0;
    }
    distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void opertor(distance &d)
    {
        feet=d.feet;
        inches=d.inches;
    }
    void display()
    {
        cout<<feet<<inches;
    }
};
    int main()
    {
        
        distance d1,d2;
        d1(10,10),d2(5,11);
        d1.display();
        d2.display();
        d1=d2;
        d1.display();
        d2=d1;
        d2.display();
        return 0;
    }


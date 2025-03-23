#include<iostream>
using namespace std;
class A
{
    float a,b;
    public:
    A()
    {
        cout<<"zero constructor";
    }
    A(float real,float imag)
    {
        a=real;
        b=imag;
    }
    A operator+(A);
    void display();
};
A A:: operator+(A c)
{
    A temp;
temp.a=a+c.a;
temp.b=b+c.b;
cout<<temp.a;
cout<<temp.b;
}
void A::display()
{
    cout<<a<<b;
}
int main()
{
    A c1,c2,c3;
    c1=A(1.5,1.5);
    c2=A(2.5,2.5);
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}




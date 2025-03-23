#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c;
    void getdata();
    friend void sum(A);
};
void A::getdata()
{
    cout<<"Enter two numbers= \n";
    cout<<"Normal \n";
    cin>>a>>b;
}
void sum(A c)
{
    int d;
    d=c.a+c.b;
    cout<<"Friend \n";
    cout<<"Sum="<<d;
}
int main()
{
    A c;
    c.getdata();
    sum(c);
    return 0;
}
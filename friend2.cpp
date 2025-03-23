#include<iostream>
using namespace std;
class A
{
    public:
    int i,a;
    void input();
    void fact(int x);
    friend void table(A);
};
void A::input()
{
    int a,b;
    cin>>a>>b;
}
void A::fact(int x)
{
    int c=1;
    int i;
    for(i=0;i<=x;i++)
    {
        c=c*i;
        cout<<c;
    }
}
void table(A d)
{
    int f,a,i;
    cin>>a;
    for(i=1;i<=10;i++)
    {
    f=d.a*d.i;
    cout<<f;
    }
}
int main()
{
    A d;
    d.input();
    d.fact(5);
    table(d);
    return 0;
}
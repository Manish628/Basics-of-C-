#include<iostream>
using namespace std;
class A
{
int  a,b,c;
public:
void get();
void put();
void operator-();
};
void A::get()
{
    cin>>a>>b;
}
void A::put()
{
    cout<<a<<b;
}
void A::operator-()
{
    a= -a;
    b= -b;
}
int main()
{
    A a1;
     a1.get();
    a1.put();
    -a1;
    a1.put();
    return 0;
}


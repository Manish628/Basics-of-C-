#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    void getdata();
    friend void sum(A);
};
void A::getdata()
{
    cout<<"Enter two nos.";
    cin>>a>>b;
}
void sum(A aa)
{
    int c;

    c=aa.a+aa.b;
    cout<<"Sum="<<c;
}
int main()
{
    A aa;
    aa.getdata();
    sum(aa);
    return 0;
}
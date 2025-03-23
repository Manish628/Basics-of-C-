#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void fact()
    {
        int c=1;
        cout<<"number="<<endl;
        cin>>a;
        for(b=a;b>=1;b--)
        {c=c*b;
        }
        cout<<"factorial="<<c<<endl;
    }
};
int main()
{
    A a1;
    a1.fact();
    return 0;
}
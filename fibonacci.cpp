#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c;
    int n=10;
    a=0;
    b=1;
    cout<<a<<endl<<b<<endl;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;

    }

}
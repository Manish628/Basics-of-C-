#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1,i;
    cout<<"Enter base"<<endl;
    cin>>a;
    cout<<"Enter power"<<endl;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        c=a*c;
    }
    cout<<c<<endl;

}
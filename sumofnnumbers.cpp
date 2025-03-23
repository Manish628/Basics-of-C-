#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum= sum+i;
        //sum+=i
    }
    cout<<sum<<endl;
}
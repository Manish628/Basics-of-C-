#include<iostream>
using namespace std;
class Manish
{
    public:
    int a,b,c,d,i;
    void avg();
    void power();
    void fact();
};
void Manish::avg()
{
    cin>>a>>b>>c;
    d=(a+b+c)/3;
    cout<<"Average="<<d;
}
void Manish::power()
 {
        int n=1;
        cin>>a>>b;
        for(i=0;i<b;i++)
        {
            n=n*a;
            }
            cout<<"Power="<<n;
        
 }
void Manish::fact()
    {
        int n=1;
        cin>>a;
        for(i=1;i<=a;i++)
        {
            n=n*i;
        }
            cout<<"Factorial="<<n;
        
    }
    int main()
    {
        Manish m1;
        m1.avg();
        m1.power();
        m1.fact();
    }

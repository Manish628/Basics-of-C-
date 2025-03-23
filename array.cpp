#include<iostream>
using namespace std;
class A
{
    int a,b,c,d,e,f;
    public:
    void marks()
    {
        cin>>a>>b>>c>>d>>e;
       { cout<<a<<b<<c<<d<<e<<endl;
       }
    }
    void avg()
    {
        f=(a+b+c+d+e)/5;
      {  cout<<"average of marks="<<f<<endl;
      }
    }
};
int main()
{
    int i;
    A a1[5];
    
    for(i=5;i>=1;i++)
    
    a1[i].marks();
    a1[i].avg();
    return 0;
}
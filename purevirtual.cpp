#include<iostream>
using namespace std;
class shape
{
  public:
  virtual void calarea()=0;
};
class square:public shape
{
    int a,b;
    public:
    void calarea()
    {
        cin>>a;
        b=a*a;
        cout<<"Area of square="<<b;
    }
};
class circle:public shape{
    public:
    float r,c;
    void calarea()
    {
        cin>>r;
        c=3.14*r*r;
        cout<<"Area of circle="<<c;
    }
};
class rectangle:public shape{
    public:
    int l,b,h;
    void calarea()
    {
        cin>>l>>b;
        h=l*b;
        cout<<"Area of rectangle="<<h;
    }
};
class triangle:public shape
{
    public:
    int p,q,m;
    void calarea()
    {
        cin>>q>>m;
        p=(q+m)/2;
        cout<<"Area of triangle="<<p;
    }
};
int main()
{
    shape *s;
    square t;
    circle u;
    rectangle v;
    triangle w;
    s=&t;
    s->calarea();
    s=&u;
    s->calarea();
    s=&v;
    s->calarea();
    s=&w;
    s->calarea();
    return 0;

}
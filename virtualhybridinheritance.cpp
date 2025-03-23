#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"show parent class"<<endl;
    }
};
class B:virtual public A
{
    public:
    void display()
    {
        cout<<"display derived class"<<endl;
    }
};
class C:virtual public A
{
    public:
    void print()
    {
        cout<<"print derived class"<<endl;
    }
};
class D:public C,public B
{
    public:
    void disp()
    {
        cout<<"manish"<<endl;
    }
};
int main()
{
    A a1; B b1; C c1;  D d1;
    a1.show();
    b1.show();
    b1.display();
    c1.show();
    c1.print();
    d1.show();
    d1.display();
    d1.print();
    d1.disp();
    return 0;
}

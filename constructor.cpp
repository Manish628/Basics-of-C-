#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void display()
    {
        cout<<"Normal function"<<endl;
    }
    A()
    {
        cout<<"constructor"<<endl;
    }
    A(int p,int q)
    {
        a=p;
        b=q;
        cout<<a<<b<<endl;
    }
};
int main()
{

   A a1;
    a1.display();

}
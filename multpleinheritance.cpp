#include<iostream>
using namespace std;

class A
{
    int a,b,c;
    public:
    void show()
    {
        cout<<"Learning c++"<<endl;
    }
    void display()
    {
        cout<<"Computer"<<endl;
    }
    };
    class B:public A
    {
        public:
        void disp()
        {
            cout<<"Derived class"<<endl;
        }
    };
    int main()
    {
        A a1;
        B b1;
        a1.show();
        a1.display();
        b1.show();
        b1.display();
        b1.disp();
        return 0;
    }



#include<iostream>
using namespace std;
class Com
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<b;
    }
    friend void fun(Com);
};
void fun(Com c1)
{
    cout<<c1.a+c1.b;
}
int main()
{
    Com c1;
    c1.setdata(4,5);
    fun(c1);
    return 0;
}
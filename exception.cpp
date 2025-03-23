#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome";
}
try
{
    {
        throw 10;
    {
    cout<<"\n in try";
    }
    }
}
catch(float c)
{
    cout<<"exception no"<<c;

}
cout<<"last line";
return 0;
}
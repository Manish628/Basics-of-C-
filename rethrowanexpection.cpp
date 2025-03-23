#include<iostream>
using namespace std;
void divide(double x,double y)
{
    cout<<"Inside function \n";
    try
    {
        if(y==0.0)
        throw y;
        else
        cout<<x/y;
    }
    catch(double y)
    {
        cout<<"catch double";
        throw;
    }
    cout<<"End of function \n";
}
int main()
{
    cout<<"main \n";
    try
    {
        divide(20.4,2.1);
    }
    catch(double y)
    {
        cout<<"caught double";
    }
    cout<<"end main";
    return 0;
    
}
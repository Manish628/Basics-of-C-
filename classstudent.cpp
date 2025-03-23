#include<iostream>
using namespace std;
class Student
{
    public:
    void show()
    {
        int a,b;
        char name[10],city[20];
        cin>>a>>name>>city>>b;
        cout<<a<<name<<city<<b;
    }
};
int main()
{
    Student s1[3];
    int i;
    for(i=1;i<=3;i++)
    {
        s1[i].show();
    }
}

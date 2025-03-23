#include<iostream>
using namespace std;
class Person
{
    public:
    void display()
    {
        char name[20],address[20];
        int a;
        cin>>name>>address>>a;
        cout<<name<<address<<a;
    }
};
class Employee:public Person
{
    public:
    void show()
    {
        int b;
        char ename[20];
        cin>>b>>ename;
        cout<<b<<ename<<endl;
    }
};
class Manager:public Person
{
    public:
    void print()
    {
        int c;
        char designation[20],dept[20];
        cin>>c>>designation>>dept;
    }
};
int main()
{
    Person p1;
    Employee e1;
    Manager m1;
    p1.display();
    e1.show();
    e1.display();
    m1.print();
    m1.display();

}

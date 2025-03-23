#include<iostream>
using namespace std;
class Worker
{
    public:
    int a,b;
    void show();
    void display();
    void print();
};
void Worker::show()
{
    char worker_name[20];
     cin>>worker_name;
     cout<<"Worker-name"<<worker_name;
}
void Worker::display()
{
    int a;
    cin>>a;
    cout<<"No-of-hours-worked"<<a;
}
void Worker::print()
{
    int b;
    cin>>b;
    cout<<"Pay-rate"<<b;
}
int main()
{
    Worker w1;
    w1.show();
    w1.display();
    w1.print();

}
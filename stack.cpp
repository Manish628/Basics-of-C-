#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation of stack
    stack<int> s;

    //push operation
    s.push(1);
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();
s.pop();
    cout<<"printing top element \n"<<s.top();

    if(s.empty())
    {
        cout<<"Stack is empty \n";
    }
    else{
        cout<<"Stack is not empty \n";
    }
    cout<<"Size of stack is \n"<<s.size();
    return 0;

}

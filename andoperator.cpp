#include<iostream>
using namespace std;
int main()
{
    char d;
    cout<<"Enter the alphabet you want \n";
    cin>>d;
    if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonents";
    }
    return 0;
}
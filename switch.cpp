#include<iostream>
using namespace std;
int main()
{
    char d;
    cout<<"Enter the alphabet you want \n";
    cin>>d;
    switch(d)
    {
        case 'a':cout<<"Vowel";
        break;
        case 'e':cout<<"Vowel";
        break;
        case 'i':cout<<"Vowel";
        break;
        case 'o':cout<<"Vowel";
        break;
        case 'u':cout<<"Vowel";
        break;
        default:cout<<"Consonents";
    }
    return 0;
}
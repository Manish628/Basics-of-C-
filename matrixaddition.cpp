#include<iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    cout<<"Enter the element of first matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the element of second matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"Sum of addition of two matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<endl;
        }
    }
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k;
    cout<<"Enter the elements of a first matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of a second matrix"<<endl;
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
            for(k=0;k<3;k++)
            {
                C[i][j]=A[i][k]*B[j][k];
            }
        }
    }
    cout<<"Multiplication of two matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<endl;
        }
    }
    return 0;
}
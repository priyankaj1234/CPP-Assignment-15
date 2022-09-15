#include<iostream>
using namespace std;

void mul(int [][3],int[][3]);
void add(int [][3],int [][3]);

int main()
{
    int a[3][3],b[3][3];
    int i,j;

    cout<<endl<<"Enter elements for 'A' matrix : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<endl<<"Enter elements for 'B' matrix : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

mul(a,b);
add(a,b);

return 0;
}

void mul(int a[][3],int b[][3])
{
    int m[3][3];
    int i,j,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=0;

            for(k=0;k<3;k++)
            {
                m[i][j]=a[i][k]*b[k][j];
            }
        }
    }

    //for printing result
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}

void add(int a[][3],int b[][3])
{
    int ad[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //ad[i][j]=0;

                ad[i][j]=a[i][j]+b[i][j];
            
        }
    }

    //for printing result
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<ad[i][j]<<" ";
        }
        cout<<endl;
    }
}
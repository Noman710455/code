#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of data points:";
    cin>>n;
    int x[n],y[n];
    cout<<"Enter the date of (x and y):"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"x[ "<<i<<"]=";
        cin>>x[i];
        cout<<"y[ "<<i<<"]=";
        cin>>y[i];
    }

    double difftable [n][n];
    for(int i=0;i<n;i++)
    {
        difftable[i][0]=y[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n-1; j>i-1; j--)
        {
            difftable[j][i]=difftable[j][i-1] - difftable[j-1][i-1];
        }
    }

    cout<<endl<<"BACKWARD DIFFERENCE TABLE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
        for(int j=0;j<=i;j++)
        {
            cout<<"\t"<<difftable[i][j];
        }
        cout<<endl;
    }

    
    double value;
    cout<<"enter the value of interpolate:";
    cin>>value;

    double h=x[1]-x[0];
    double u=(value-x[n-1])/h;
    cout<<u<<endl;

    double result=y[n-1];
    double term=1.0;
    for(int i=1;i<n;i++)
    {
        term*=(u+(i-1))/i;
        result+=term*difftable[n-1][i];
    }
    cout<<"Enter the value at "<<value<< "is "<<result<<endl;
    return 0;
}


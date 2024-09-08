#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of data:";
    int n;
    cin>>n;
    double x[n],y[n];
    cout<<"Enter the data point(x and y):"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"]=";
        cin>>y[i];
    }
    //different table set
    double difftable[n][n];
    for(int i=0;i<n;i++)
    {
        difftable[i][0]=y[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0; j<n-i; j++)
        {
            difftable[j][i]=difftable[j+1][i-1] - difftable[j][i-1];
        }
    }
    //different table display
    cout<<endl<<"FORWARD DIFFERENCE TABLE"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
        for(int j=0;j<n-i;j++)
        {
            cout<<"\t"<<difftable[i][j];
        }
        cout<<endl;
    }
    //give the interpolate value
    double value;
    cout<<"Enter the value to interpolate:";
    cin>>value;

    double h=x[1]-x[0];
    double u=(value-x[0])/h;
    
    double result=y[0];
    double term=1.0;
    for(int i=1;i<n;i++)
    {
        term=term*(u-(i-1))/i;
        result+=term*difftable[0][i];
    }
    cout<<"Interpolation value at " <<value<<" is "<<result<<endl;
    return 0;

}

// noman is good gril

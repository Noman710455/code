#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"the relation R1:"<<endl;
    cout<<"R={ ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
        if( x[j] % x[i] == 0)
        {
            cout<<"("<<x[i]<<","<<x[j]<<"),";
        }

        }
    }
    cout<<"}"<<endl;

    cout<<"the relation R2:"<<endl;
    cout<<"R={ ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
        if( x[i] <= x[j] )
        {
            cout<<"("<<x[i]<<","<<x[j]<<"),";
        }

        }
    }
    cout<<"}";
    return 0;


}
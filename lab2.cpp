#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int x[n];
   for(int i=0;i<n;i++)
   {
    cin>>x[i];
   }
   int m;
   cin>>m;
   int y[m];
   for(int i=0;i<m;i++)
   {
    cin>>y[i];
   }
   int r[n][m];

    cout<<"the relation R2:"<<endl;
    cout<<"R={ ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
        if( x[i] > x[j] )
        {
            cout<<"("<<x[i]<<","<<x[j]<<"),";
            r[i][j]=1;
        }

        else
        {
            r[i][j]=0;
        }
        }
    }
    cout<<"}"<<endl;
    cout<<"Print matrix:"<<endl;
      for(int i=0;i<n;i++)
    {   
        cout<<" ";
        for(int j=0;j<n;j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
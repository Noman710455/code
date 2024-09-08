#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Find Relation R1:"<<endl;
    cout<<"R1"<<"="<<"{";
    bool first = true;  // প্রথম জোড়ার আগে কমা এড়ানোর জন্য একটি ভেরিয়েবল
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)  
        {
            if(a[j] % a[i] == 0)
            {
                if (!first)  // প্রথম জোড়ার পর থেকে প্রতিবার আগে কমা প্রিন্ট হবে
                    cout<<",";
                
                cout<<"("<<a[i]<<","<<a[j]<<")";
                first = false;  // প্রথম জোড়া প্রিন্ট হয়ে গেলে ভেরিয়েবল false হয়ে যাবে
            }
        }
    }
    cout<<"}"<<endl;
   
    cout<<"Find Relation R2:"<<endl;
    cout<<"R2"<<"="<<"{";
    first = true;  // R2 এর জন্য আবার প্রথম জোড়ার আগে কমা এড়ানোর জন্য
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i] <= a[j])
            {
                if (!first)  // প্রথম জোড়ার পর থেকে প্রতিবার আগে কমা প্রিন্ট হবে
                    cout<<",";
                
                cout<<"("<<a[i]<<","<<a[j]<<")";
                first = false;  // প্রথম জোড়া প্রিন্ট হয়ে গেলে ভেরিয়েবল false হয়ে যাবে
            }
        }
    }
    cout<<"}";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the coefficient of the equation(ax^2+bx+c):";
    cin>>a>>b>>c;
    double lb,ub;
    cout<<"Enter the lower bound:";
    cin>>lb;
    cout<<"Enter the upper bound:";
    cin>>ub;
    double fa=a*lb*lb + b*ub + c;
    double fb=a*ub*ub + ub*b + c;
    if(fa*fb>0)
    {
        return 0;
    }
    double root;
    double Ep=0.0001;
    while( (ub-lb)>=Ep)
    {
        root=ub-(fb*(ub-lb)/(fb-fa));
        double fc=a*root*root + b*root +c;
        if(fc==0){
            cout<<"Root="<<root<<endl;
            return 0;
        }
        else if(fa*fc<0)
        {
            ub=root;
            fb=fc;
        }
        else
        {
            lb=root;
            fa=fc;
        }
    }
    cout<<"Root="<<root<<endl;
    return 0;

}

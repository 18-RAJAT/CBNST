//
// Created by rajat joshi on 09-07-2022.
//

#include<bits/stdc++.h>
using namespace std;

double fun(double x)
{
    //double a=pow(x,3)-x-11.0;
    return x*x*x-x-1;
    // return x*x-4;
}
int main()
{
    cout<<"***********************************************************";cout<<"\n";
    cout<<"***********************************************************";cout<<"\n";
    cout<<"*                   BISECTION METHOD                      *";cout<<"\n";
    cout<<"***********************************************************";cout<<"\n";
    cout<<"***********************************************************";cout<<"\n";
    cout.precision(5);
    cout.setf(ios::fixed);
    double a,b,c,e,fa,fb,fc;
    a:cout<<"Enter the initial guesses:\n a=";
    cin>>a;
    cout<<"\n b=";
    cin>>b;

    cout<<"\n Enter the degree of accuracy desired"<<"\n";
    cin>>e;

    if(fun(a)*fun(b)>0)
    {
        cout<<"Please enter a different initial guess"<<"\n";
        goto a;
    }
    else
    {
//        while(abs(a-b)>=e)
          while(fabs(a-b)>=e)
        {
            c=(a+b)/2.0;
            fa=fun(a);
            fb=fun(b);
            fb=fun(c);

            cout<<"A="<<a<<"     "<<"B="<<b<<"     "<<"C="<<c<<"      FC="<<fc<<"\n";
            cout<<"\n";
            if(fc==0)
            {
                cout<<"The root of the equation is -> "<<c;
                break;
            }
            if(fa*fc>0)
            {
                a=c;
            }
            else if(fa*fc<0)
            {
                b=c;
            }
        }
    }
    cout<<"The root of the equation is:->:"<<c;
    return 0;
}
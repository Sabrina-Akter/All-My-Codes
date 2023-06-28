#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    double x1,x2,x3,y1,y2,y3,aa,bb,cc;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double a,b,c;
    b=(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    a=(sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1))));
    c=(sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3))));
    aa=a*a;
    bb=b*b;
    cc=c*c;
    //cout<<a<<" "<<b<<" "<<c<<endl;
    double alpha, beta,gama;
    alpha=acos((bb+cc-aa)/(2*b*c));
    beta=acos((aa+cc-bb)/(2*a*c));
    //cout<<fixed<<setprecision(3)<<alpha<<endl;
    //cout<<fixed<<setprecision(3)<<beta<<endl;
    double p=(180.0/acos(-1));
    alpha*=p;
    beta*=p;
    gama=180-(alpha+beta);
    cout<<fixed<<setprecision(3)<<alpha<<endl;
    cout<<fixed<<setprecision(3)<<beta<<endl;
    cout<<fixed<<setprecision(3)<<gama<<endl;
    return 0;
}
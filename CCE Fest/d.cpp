#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    double n,x,y;
    cin>>n;
    int i,j;
     vector<pair<double,double>>vy;
    while(n--)
    {
        cin>>x>>y;
         vy.push_back(make_pair(x,y));
    }
   double mx=0,x1,x2,y1,y2;
   double p=vy.size();
   for(i=0;i<p-1;i++)
   {
    for(j=i+1;j<p;j++)
    {
       x2=vy[i].first;//-2017
    x1=vy[j].first;//2017
     y2=vy[i].second;//-2017
     y1=vy[j].second;//0
    //cout<<x2<<" "<<x1<<" "<<y2<<" "<<y1<<endl;
    double cb=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    ll c=0;
    for(int k=0;k<vy.size();k++)
    {
        y=vy[k].second;
        x=vy[k].first;
        if(y!=y1 && y!=y2 && x!=x1 && x!=x2)
        {
         continue;
        }
        else
         {
            if(((y-y1)/(y-y2))== ((x-x1)/(x-x2)))
              c++;
         }
    }
    if(c==p)
       mx=max(mx,cb);
    }
   }
  cout<<fixed<<setprecision(9)<<mx<<endl;
    return 0;
}
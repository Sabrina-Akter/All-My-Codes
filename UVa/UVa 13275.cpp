#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, c, d, f, i, sum, count=0;
    cin >> t;
    while(t--)
    {
       count++;
       sum = 0;
       cin >> a >> b >> c >> d;
       if(a==29 && b==2)
       {
           f=1;
       }
       else
       {
           f=0;
       }
       for(i=c+1;i<=d;i++)
       {
           if(f==1 && (i%400==0))
           {
               sum++;
           }
           else if(f==1 && (i%4==0 && i%100!=0))
           {
               sum++;
           }
           else if(f==0)
           {
               sum++;
           }
       }
       cout << "Case " << count << ": " << sum << endl;
    }
    return 0;
}

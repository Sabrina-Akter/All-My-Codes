#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, sum;
    cin >> t;
    while(t--)
    {
       cin >> n;
       long long ar[n];
       for(i=0;i<n;i++)
       {
           cin >> ar[i];
       }
       for(i=0;i<n;i++)
       {
           sum = 0;
           j = i;
           while(1)
           {
               sum = sum + (j+1) + ar[j];
               if(sum>=n)
               {
                   break;
               }
               j = sum;
           }
       }
    }
    return 0;
}

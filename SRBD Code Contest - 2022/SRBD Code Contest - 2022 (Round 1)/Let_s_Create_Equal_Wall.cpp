#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fastt;
    long long n1, n2, n3, i, sum1=0, sum2=0, sum3=0, mx=0, x,y,z, ans=0, M=LONG_LONG_MIN;
    cin >> n1 >> n2 >> n3;
    map <long long, long long> m;
    mx = max(max(n1, n2), max(n2,n3));
    vector <long long> v1(n1), v2(n2), v3(n3); 
    for(i=0;i<n1;i++)
    {
        cin >> v1[i];
    }
    for(i=0;i<n2;i++)
    {
        cin >> v2[i];
    }
    for(i=0;i<n3;i++)
    {
        cin >> v3[i];
    }
    x=n1-1,y=n2-1,z=n3-1;
    for(i=mx-1;i>=0;i--)
    {
        if(x>=0)
        {
            sum1+=v1[x];
            m[sum1]++;
        }
        if(y>=0)
        {
            sum2+=v2[y];
            m[sum2]++;
        }
        if(z>=0)
        {
            sum3+=v3[z];
            m[sum3]++;
        }
        x--;
        y--;
        z--;
        if(m[sum1]==3)
        {
            M = max(M, sum1);
        }
        else if(m[sum2]==3)
        {
            M = max(M, sum2);
        }
        else if(m[sum3]==3)
        {
            M = max(M, sum3);
        }
    }
    cout << max(ans, M) << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, sum1=0, sum2=0, sum3=0, sum4=0, sum=0;
    string s;
    for(i=0;i<4;i++)
    {
        cin >> s;
        if(s=="H")
        {
            sum1=1;
        }
        else if(s=="2B")
        {
            sum2=1;
        }
        else if(s=="3B")
        {
            sum3=1;
        }
        else if(s=="HR")
        {
            sum4=1;
        }
    }
    sum=sum1+sum2+sum3+sum4;
    if(sum==4)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

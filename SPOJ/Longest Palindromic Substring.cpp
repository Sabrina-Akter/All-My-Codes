#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, MAX=0, l1, r1, l2, r2, sum1, sum2;
    string s;
    cin >> n >> s;
    for(i=0;i<s.size();i++)
    {
        l1=i,r1=i+1, sum1=0;
        while(1)
        {
            if((s[l1]==s[r1]) && (s[l1]>=97 && s[l1]<=122) && (s[r1]>=97 && s[r1]<=122))
            {
                sum1+=2;
                l1--;
                r1++;
            }
            else
            {
                MAX = max(MAX, sum1);
                sum1=0;
                break;
            }
        }
        l2=i,r2=i+2, sum2=1;
        while(1)
        {
            if((s[l2]==s[r2]) && (s[l2]>=97 && s[l2]<=122) && (s[r2]>=97 && s[r2]<=122))
            {
                sum2+=2;
                l2--;
                r2++;
            }
            else
            {
                MAX = max(MAX, sum2);
                sum2=0;
                break;
            }
        }
    }
    cout << MAX << endl;
    return 0;
}

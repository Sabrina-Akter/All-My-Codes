#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j, n, flag=0;
    ll A[13]={0,1,2,3,4,5,6,7,8,9,0,1,2};
    ll B[4];
    map <ll, ll> m;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        n = s[i]-48;
        B[i]=n;
        m[n]++;
        if(m[n]==4)
        {
            flag=1;
            cout << "Weak" << endl;
            continue;
        }
        if(i==3)
        {
            for(j=0;j<13;j++)
            {
                if(A[j]==B[0] && A[j+1]==B[1] && A[j+2]==B[2] && A[j+3]==B[3])
                {
                    flag=1;
                    cout << "Weak" << endl;
                    continue;
                }
            }
        }
    }
    if(flag==0)
    {
        cout << "Strong" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll i, j, n, sum1=0, sum2=0;
        cin >> n;
        vll v1, v2;
        ll A[n+1]={0}, B[n+1]={0};
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            sum1+=A[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> B[i];
            sum2+=B[i];
        }
        if(sum1!=sum2)
        {
            cout << "-1" << endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(A[i]>B[i])
                {
                    for(j=0; j<n; j++)
                    {
                        if((i!=j)&&(A[j]<B[j]))
                        {
                            A[i]--;
                            A[j]++;
                            v1.pb(i+1);
                            v2.pb(j+1);
                            if(A[i]!=B[i])
                            {
                                i--;
                            }
                            break;
                        }
                    }
                }
                else if(A[i]<B[i])
                {
                    for(j=0; j<n; j++)
                    {
                        if((i!=j)&&(A[j]>B[j]))
                        {
                            A[i]++;
                            A[j]--;
                            v1.pb(j+1);
                            v2.pb(i+1);
                            if(A[i]!=B[i])
                            {
                                i--;
                            }
                            break;
                        }
                    }
                }
            }
            cout << v1.size() << endl;
            for(i=0;i<v1.size();i++)
            {
                cout << v1[i] << " " << v2[i] << endl;
            }
        }
    }
    return 0;
}

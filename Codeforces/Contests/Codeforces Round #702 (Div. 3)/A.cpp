#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long t, n, i, sum, x;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        long long ar[n];
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        vector <long long> v;
        v.push_back(ar[0]);
        for(i=1;i<n;i++)
        {
            if(max(v[v.size()-1], ar[i])>(2*(min(v[v.size()-1], ar[i]))))
            {
                if(v[v.size()-1]>(2*ar[i]))
                {
                    if(v[v.size()-1]%2!=0)
                    {
                        x = ((max(v[v.size()-1], ar[i]))/2)+1;
                    }
                    else if((v[v.size()-1]%2==0))
                    {
                        x = ((max(v[v.size()-1], ar[i]))/2);
                    }
                    v.push_back(x);
                }
                else if(v[v.size()-1]<(2*ar[i]))
                {
                    x = ((min(v[v.size()-1], ar[i]))*2);
                    v.push_back(x);
                }
                sum++;
                i--;
            }
            else
            {
                v.push_back(ar[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}

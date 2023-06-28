#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,n, sum=0;
        cin >> m >> n;
        for(i=m;i<=n;i++)
        {
            if(i%2!=0)
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

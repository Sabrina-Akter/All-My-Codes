#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x=-1, y=-1, ta;
        cin >> n;
        if(n%2==0)
        {
            int ar1[n/2], ar2[n/2];
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    x++;
                    ar1[x] = i;
                }
                else
                {
                    y++;
                    ar2[y] = i;
                }
            }
            for(i=0;i<n/2;i++)
            {
                cout << ar1[i] << " " << ar2[i] << " ";
            }
        }
        else
        {
            int ar[n];
            for(i=n;i>=1;i--)
            {
                x++;
                ar[x] = i;
            }
            ta = ar[0];
            ar[0] = ar[n/2];
            ar[n/2] = ta;
            for(i=0;i<n;i++)
            {
                cout << ar[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

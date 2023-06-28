#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, j, k, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long ar[n];
        x = 0;
        j = 0;
        k = n-1;
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                    cout << ar[j] << " ";
                    j++;
            }
            else
            {
                    cout << ar[k] << " ";
                    k--;
            }
            x++;
            if(x==n)
            {
                cout << endl;
                break;
            }
        }
    }
    return 0;
}

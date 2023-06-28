#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, f=0, sum=0;
    cin >> t;
    while(t--)
    {
        sum = 0;
        f=0;
        cin >> n;
        long long ar[n];
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]>i)
            {
                if(ar[i]-i<=3)
                {
                    sum = sum + (ar[i]-i)-1;
                }
                else if(ar[i]-i>3)
                {
                    f=1;
                    cout << "Too chaotic\n";
                    break;
                }
            }
        }
        if(f==0)
        {
            cout << sum << endl;
        }
    }
    return 0;
}

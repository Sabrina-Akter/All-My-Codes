#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, ans=0, num=0, f=0;
    cin >> n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;)
    {
        if(arr[i]==0)
        {
            f=1;
            break;
        }
        num+=arr[i];
        i+=arr[i];
        ans++;
        if(num>=n-1)
        {
            break;
        }
    }
    if(f==0)
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
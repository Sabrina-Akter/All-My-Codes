#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, x, n, ar[200]={0}, max=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        ar[x]++;
        if(ar[x]>max)
        {
            max = ar[x];
        }
    }
    cout << max << endl;
    return 0;
}

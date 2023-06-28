#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, sum=0;
    cin >> n;
    long long ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i+2]==0)
        {
            sum++;
            i = i + 1;
        }
        else if(ar[i+1]==0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, sum=0, f=0;
    cin >> n;
    long long ar[7];
    for(i=0;i<7;i++)
    {
        cin >> ar[i];
    }
    while(1)
    {
        for(i=0;i<7;i++)
        {
            sum = sum + ar[i];
            if(sum>=n)
            {
                f=1;
                cout << i+1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    return 0;
}

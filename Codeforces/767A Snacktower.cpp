#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n, i, x, N, j;
    cin >> n;
    N = n-1;
    long long ar[n]={0};
    for(i=0;i<n;i++)
    {
        cin >> x;
        x--;
        ar[x] = 1;
        while(1)
        {
            if((ar[x]==1) && N==x)
            {
                cout << N+1 << " ";
                N--;
                x--;
                if(x==-1)
                {
                    break;
                }
            }
            else
            {
                cout << endl;
                break;
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N, i, f=0;
    cin >> t;
    while(t--)
    {
        f = 0;
        cin >> N;
        int x[N];
        for(i=0;i<N;i++)
        {
            cin >> x[i];
        }
        for(i=0;i<N-1;i++)
        {
            if((x[i]==1) && ((x[i+1]!=0) || (x[i+2]!=0) || (x[i+3]!=0) || (x[i+4]!=0) || (x[i+5]!=0)))
            {
                f = 2;
                break;
            }
            else if((x[i]==1) && ((x[i+1]==0) && (x[i+2]==0) && (x[i+3]==0) && (x[i+4]==0) || (x[i+5]==0)))
            {
                f = 1;
                i = i+5;
            }


        }
        if(f==0 || f==2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, c=0, h, l;
    cin >> t;
    while(t--)
    {
        c++;
        h = 0;
        l = 0;
        cin >> n;
        int N[n];
        for(i=0;i<n;i++)
        {
            cin >> N[i];
            if(i!=0)
            {
                if(N[i]>N[i-1])
                {
                    h++;
                }
                else if(N[i]<N[i-1])
                {
                    l++;
                }
            }
        }
        cout << "Case " << c << ": " << h << " " << l << endl;
    }
    return 0;
}

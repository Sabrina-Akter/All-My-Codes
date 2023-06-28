#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x=0;
    cin >> t;
    while(t--)
    {
        x++;
        int n, i, j, sum=0, r=0, c=0;
        cin >> n;
        int N[n][n], M[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> N[i][j];
                M[j][i] = N[i][j];
                if(i==j)
                {
                    sum = sum + N[i][j];
                }
            }
        }
        set <int> s_r, s_c;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                s_r.insert(N[i][j]);
                s_c.insert(M[i][j]);
            }
            if(s_r.size()!=n)
            {
                r++;
            }
            if(s_c.size()!=n)
            {
                c++;
            }
            s_r.clear();
            s_c.clear();
        }
        cout << "Case #" << x << ": " << sum << " " << r << " " << c << endl;
    }
}

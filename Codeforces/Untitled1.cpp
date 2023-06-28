#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, u = 0, sum = 0, f=0, x=0;
    cin >> n >> m;
    vector <string> s(n);
    vector <string> ss(n);

    for(i=0;i<n;i++)
    {
        cin >> s[i];
        ss[i] = "";
    }

    for(i=0;i<m;i++)
    {
        sum = 0;
        f = 0;
        for(j=0;j<n-1;j++)
        {
            string s1=((ss[j])+(s[j][i])), s2=((ss[j+1])+(s[j+1][i]));
            cout << "s1 = " << s1 << " s2 = " << s2 << endl;
            if(s1>s2)
            {
                u = u + 1;
                cout << "u = " << u << endl;
                f = 1;
                break;
            }
        }
        cout << "\n";
        if(f==0)
        {
            for(j=0;j<n;j++)
            {
                ss[j] = ss[j] + s[j][i];
                cout << ss[j] << endl;
            }
        }
        if(f==0)
        {
            for(j=0;j<n-1;j++)
            {
                if(ss[j]<ss[j+1])
                {
                    cout << "ss[j] = " << ss[j] << endl;
                    cout << "ss[j+1] = " << ss[j+1] << endl;
                    sum = sum + 1;
                    cout << j <<"sum = " << sum << endl;
                }
            }
        }
        if(sum==n-1)
        {
            x = 1;
            cout << u << endl;
            break;
        }
    }
    if(x==0)
    {
        cout << u << endl;
    }
    return 0;
}

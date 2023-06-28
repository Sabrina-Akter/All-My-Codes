#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int n, x, i;
    int ar[1000006];
    memset(ar,0,sizeof(ar));
    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> st;
        if(st[0]!='-' && st.size()<=6)
        {
            stringstream geek(st);
            int x = 0;
            geek >> x;
            ar[x] = 1;
        }
    }

    for(i=0;i<=n;i++)
    {
        if(ar[i]==0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, mid, m, x, y;
    cin >> n;
    string s;
    char ar[n];
    cin >> s;
    if(n%2==0)
    {
        mid = (n/2)-1;
        m = 0;
    }
    else
    {
        mid = n/2;
        m = 1;
    }
    if(m==0)
    {
        x = -1, y = 0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                x++;
                ar[mid-x]=s[i];
            }
            else
            {
                y++;
                ar[mid+y]=s[i];
            }
        }
    }
    else if(m==1)
    {
        y = -1, x = 0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                y++;
                ar[mid+y]=s[i];
            }
            else
            {
                x++;
                ar[mid-x]=s[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << ar[i];
    }
    return 0;
}

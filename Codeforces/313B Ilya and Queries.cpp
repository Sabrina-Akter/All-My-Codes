#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    string s;
    cin >> s;
    n = s.size();
    int i;
    int A[n];
    for(i=0;i<n;i++)
    {
        A[0] = 0;
        if(i!=0)
        {
            if(s[i]==s[i-1])
            {
                A[i] = A[i-1] + 1;
            }
            else
            {
                A[i] = A[i-1];
            }
        }
    }
    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> x >> y;
        x = x-1;
        y = y-1;
        cout << A[y] - A[x] << endl;
    }
    return 0;
}

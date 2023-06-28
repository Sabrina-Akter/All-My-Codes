#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, A=0, D=0;
    cin >> n;
    char s[n];
    for(i=0;i<n;i++)
    {
        cin >> s[i];
        if(s[i]=='A')
        {
            A++;
        }
        else if(s[i]=='D')
        {
            D++;
        }
    }
    if(A>D)
    {
        cout << "Anton\n";
    }
    else if(D>A)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    return 0;
}

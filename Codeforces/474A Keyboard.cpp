#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S, st = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    int i, j, n;

    cin >> ch >> S;

    if(ch=='R')
    {
        n = -1;
    }
    else
    {
        n = 1;
    }

    for(i=0;i<S.size();i++)
    {
        for(j=0;j<st.size();j++)
        {
            if(S[i]==st[j])
            {
                cout << st[j+n];
            }
        }
    }
    cout << endl;
    return 0;
}

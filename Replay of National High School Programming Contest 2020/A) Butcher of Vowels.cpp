#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, j, x;
    cin >> T;
    for(i=0;i<T;i++)
    {
        x = 0;
        string S;
        cin >> S;
        for(j=0;j<S.size();j++)
        {
            if(S[j]=='a' || S[j]=='e' || S[j]=='i' || S[j]=='o' || S[j]=='u')
            {
                x = 1;
                cout << "Yes\n";
                break;
            }
        }
        if(x==0)
        {
            cout << "No\n";
        }
    }
    return 0;
}

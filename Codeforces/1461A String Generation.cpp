#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, i, sum;
    string s = "bcab";
    cin >> t;
    while(t--)
    {
        sum=0;
        cin >> a >> b;
        for(i=0;i<b;i++)
        {
            cout << "a";
            sum++;
        }
        for(i=0;i<4;i++)
        {
            if(sum==a)
            {
                cout << endl;
                break;
            }
            cout << s[i];
            sum++;
            if(i==3)
            {
                i = 0;
            }
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long a, b, c, ans;
    while(cin >> a >> b >> c)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        else
        {
            if(c==0)
            {
                ans = ((a-7)*(b-7))/2;
            }
            else if(c==1)
            {
                ans = (((a-7)*(b-7))+1)/2;
            }
            cout << ans << endl;
        }
    }
    return 0;
}

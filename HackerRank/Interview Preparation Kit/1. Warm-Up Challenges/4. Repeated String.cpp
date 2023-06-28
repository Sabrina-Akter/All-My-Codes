#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c, x, sum, i;
    string s;
    cin >> s;
    cin >> n;
    x = n/s.size();
    c = count(s.begin(), s.end(), 'a');
    x = x*c;
    if(n%s.size()==0)
    {
        cout << x << endl;
    }
    else
    {
        sum = (n/s.size())*(s.size());
        for(i=0;i<s.size();i++)
        {
            sum++;
            if(s[i]=='a')
            {
                x++;
            }
            if(sum==n)
            {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}

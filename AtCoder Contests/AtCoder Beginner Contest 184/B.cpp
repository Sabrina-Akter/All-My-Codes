#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, sum;
    string s;
    cin >> a >> b;
    cin >> s;
    sum = b;
    for(i=0;i<s.size();i++)
    {
        if(sum==0 && s[i]=='x')
        {
            continue;
        }
        else if(s[i]=='x')
        {
            sum--;
        }
        else if(s[i]=='o')
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, sum=0, count=0;
    string s;
    cin >> n;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='U')
        {
            sum++;
        }
        else if(s[i]=='D')
        {
            sum--;
        }
        if(sum==0 && s[i]=='U')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

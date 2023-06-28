#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word = "";
    cin >> s;
    long long n, i, r=0, l=0, sum=0;
    vector <string> v;
    n = s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            l++;
            word = word + 'L';
        }
        else if(s[i]=='R')
        {
            r++;
            word = word + 'R';
        }
        if(l==r)
        {
            sum++;
            v.push_back(word);
            l = 0;
            r = 0;
            word = "";
        }
    }
    cout << sum << endl;
    for(i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}

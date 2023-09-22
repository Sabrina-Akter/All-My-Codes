#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, c;
    string s1, s2;
    cin >> t;
    while(t--)
    {
        cin >> s1 >> s2;
        vector <long long> v;
        set <long long> st;
        for(i=0;i<s1.size();i++)
        {
            c = (int)(s1[i]) - 48;
            cout << c << " ";
            v.push_back(s1[i]);
        }
    }
    return 0;
}

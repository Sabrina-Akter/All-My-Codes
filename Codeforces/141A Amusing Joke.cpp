#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i;
    string s1, s2, s3, x="", y="";
    vector <char> v1, v2;
    cin >> s1 >> s2 >> s3;
    for(i=0;i<s1.size();i++)
    {
        v1.push_back(s1[i]);
    }
    for(i=0;i<s2.size();i++)
    {
        v1.push_back(s2[i]);
    }
    sort(v1.begin(), v1.end());
    for(i=0;i<v1.size();i++)
    {
        x = x+v1[i];
    }
    for(i=0;i<s3.size();i++)
    {
        v2.push_back(s3[i]);
    }
    sort(v2.begin(), v2.end());
    for(i=0;i<v2.size();i++)
    {
        y = y+v2[i];
    }
    if(x==y)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

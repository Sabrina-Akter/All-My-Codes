#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int i, j, n, two[]={2}, three[]={3}, four[]={3,2,2}, five[]={5}, six[]={5,3}, seven[]={7}, eight[]={7,2,2,2}, nine[]={7,3,3,2};
    string s;
    vector <long long int> v;
    cin >> n >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='2')
        {
            for(j=0;j<sizeof(two)/sizeof(long long int);j++)
            {
                v.push_back(two[j]);
            }
        }
        else if(s[i]=='3')
        {
            for(j=0;j<sizeof(three)/sizeof(long long int);j++)
            {
                v.push_back(three[j]);
            }
        }
        else if(s[i]=='4')
        {
            for(j=0;j<sizeof(four)/sizeof(long long int);j++)
            {
                v.push_back(four[j]);
            }
        }
        else if(s[i]=='5')
        {
            for(j=0;j<sizeof(five)/sizeof(long long int);j++)
            {
                v.push_back(five[j]);
            }
        }
        else if(s[i]=='6')
        {
            for(j=0;j<sizeof(six)/sizeof(long long int);j++)
            {
                v.push_back(six[j]);
            }
        }
        else if(s[i]=='7')
        {
            for(j=0;j<sizeof(seven)/sizeof(long long int);j++)
            {
                v.push_back(seven[j]);
            }
        }
        else if(s[i]=='8')
        {
            for(j=0;j<sizeof(eight)/sizeof(long long int);j++)
            {
                v.push_back(eight[j]);
            }
        }
        else if(s[i]=='9')
        {
            for(j=0;j<sizeof(nine)/sizeof(long long int);j++)
            {
                v.push_back(nine[j]);
            }
        }
    }
    sort(v.begin(), v.end());
    for(i=v.size()-1;i>=0;i--)
    {
        cout << v[i];
    }
    return 0;
}

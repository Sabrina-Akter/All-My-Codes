#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, j, sum=0;
    string s;
    vector <long long> v;
    cin >> n;
    cin >> s;
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=0;j<i;j++)
        {
            if(s[j]=='L')
            {
                sum++;
            }
        }
        for(j=n-1;j>i;j--)
        {
            if(s[j]=='R')
            {
                sum++;
            }
        }
        v.push_back(sum);
    }
    cout << *min_element(v.begin(),v.end()) << endl;
    return 0;
}

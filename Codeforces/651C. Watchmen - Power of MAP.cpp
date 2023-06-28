#include <bits/stdc++.h>
using namespace std;

set<pair<int, int> >s;
map<int,int>mx,my; ///mx will store the frequency of all the x-cordinates, and my will store the frequency of all the y-cordinates.
map<pair<int,int>,int>p; ///p will store the frequency of every pair
int x[200005],y[200005]; ///x and y will serially store all the pairs
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i]); ///Storing pairs in separate arrays
        s.insert({x[i],y[i]}); ///my lines
        p[make_pair(x[i],y[i])]++; ///
        mx[x[i]]++;                /// } In these three lines we are storing frequencies
        my[y[i]]++;                ///
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=mx[x[i]]+my[y[i]]-p[make_pair(x[i],y[i])]-1;
        mx[x[i]]--;
        my[y[i]]--;
        p[make_pair(x[i],y[i])]--;
    }
    cout<<ans<<endl;
}

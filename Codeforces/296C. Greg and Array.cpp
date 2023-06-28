#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000


ll A[100005];                     ///Declared array
ll B[100005];                     ///To finally store what to add to the elements of the first array
vector <pair <ll, ll> > v(100005);     ///To store the range of the operations
ll D[100005];                     ///To store the d of the operations
ll q[100005];                     ///To store the sum of the ranges of the queries


int main()
{
    fastt;
    ll i, n, m, k, l, r, d, x, y; ///n=size of array, m=no. of operations, k=no. of queries, i=for indexing
                                  ///l=starting point of the range of the operation, r=last point of the range of the operations, d=increment value
                                  ///x=starting point of the range of the query, y=last point of the range of the query


    cin >> n >> m >> k;


    ///Loop 1: To store the elements of the array
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
    }


    ///Loop 2: To store the ranges and d of the operations
    for(i=1;i<=m;i++)
    {
        cin >> l >> r >> d;
        v[i] = make_pair(l,r);
        D[i] = d;
    }


    ///Loop 3: To store the ***SUM*** of the queries
    for(i=1;i<=k;i++)
    {
        cin >> x >> y;
        q[x]++;
        q[y+1]--;
    }


    ///Loop 4: To store the frequency of the operations with ***PREFIX SUM***
    for(i=1;i<=m;i++)
    {
        q[i]+=q[i-1];
    }


    ///To store the new values of d
    for(i=1;i<=m;i++)
    {
        D[i] = q[i]*D[i];
    }


    ///*****Loop 6: To store the sum of the each index of array with the new value of d in the new array*****
    for(i=1;i<=m;i++)
    {
        l = v[i].first, r = v[i].second;
        B[l]+=D[i];
        B[r+1]-=D[i];
    }


    ///Loop 7: Prefix sum of the new array and printing the final value of the array elements
    for(i=1;i<=n;i++)
    {
        B[i]+=B[i-1];
        cout << B[i]+A[i] << " ";
    }
    return 0;
}

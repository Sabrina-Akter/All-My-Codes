#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

void getNumberFromString(string s)
{
    vll v;
    stringstream str_strm;
    str_strm << s;
    string temp_str;
    int temp_int;
    while(!str_strm.eof())
    {
        str_strm >> temp_str;
        if(stringstream(temp_str) >> temp_int)
        {
            v.pb(temp_int);
        }
        temp_str = "";
    }
    if(v.size()>1)
    {
        vll V;
        ll i, j;
        for(i=0;i<v.size()-1;i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                V.pb(__gcd(v[i],v[j]));
            }
        }
        cout << *max_element(V.begin(), V.end()) << endl;
    }
    else if(v.size()==1)
    {
        cout << v[0] << endl;
    }
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    t++;
    string my_str;
    while(t--)
    {
        getline(cin, my_str);
        getNumberFromString(my_str);
    }
    return 0;
}

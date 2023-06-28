#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    string s;
    while(getline(cin, s))
    {
        ll n, i, x, Max=0, pos=0, neg=0, zer=0, sum=0, all_sum=0;
        vll v;
        stringstream str_strm;
        str_strm << s;
        string temp_str;
        ll temp_int;
        while(!str_strm.eof())
        {
            str_strm >> temp_str;
            if(stringstream(temp_str) >> temp_int)
            {
                all_sum+=temp_int;
                if(temp_int>0)
                {
                    pos++;
                }
                else if(temp_int==0)
                {
                    zer++;
                }
                else if(temp_int<0)
                {
                    neg++;
                }
                sum+=temp_int;
                Max=max(Max,sum);
                if(sum<1)
                {
                    sum=0;
                }
            }
            temp_str = "";
        }
        n = v.size();
        if(pos==0)
        {
            cout << 0 << endl;
        }
        else if(pos==n)
        {
            cout << all_sum << endl;
        }
        else
        {
            cout << Max << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, i, x, o, e, s_e, s_o, sum;
        vector <long long> odd;
        vector <long long> even;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        s_e = even.size();
        if(s_e>0)
        {
            s_e = 1;
        }
        s_o = odd.size();
        if(s_o>1)
        {
            if(s_o%2==0)
            {
                s_o = 0;
                s_e = s_e+1;
            }
            else
            {
                s_o = 1;
                s_e = s_e+1;
            }
        }
        if((s_o==0) && (s_e==0))
        {
            cout << "0\n";
        }
        else if((s_o==0) && (s_e%2==0))
        {
            cout << "1\n";
        }
        else if((s_o==0) && (s_e%2!=0))
        {
            cout << "1\n";
        }
        else if((s_o%2==0) && (s_e==0))
        {
            cout << "0\n";
        }
        else if((s_o%2!=0) && (s_e==0))
        {
            cout << "1\n";
        }
        else if((s_o%2!=0) && (s_e%2!=0))
        {
            cout << "2\n";
        }
        else if((s_o%2!=0) && (s_e%2==0))
        {
            cout << "2\n";
        }
        even.clear();
        odd.clear();
    }
}

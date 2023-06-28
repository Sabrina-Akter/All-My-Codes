#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
    vector <string> v(40);
    v[1] = "1";
    int i, x=0, cnt=0;
    while(1)
    {
        x++;
        if(x==31)
        {
            break;
        }
        string s="";
        for(i=0;i<v[x].size();i++)
        {
            if(i==v[x].size()-1)
            {
                    cnt++;
                    s+=(to_string(cnt));
                    s+=v[x][i];
                    cnt=0;
            }
            else
            {
                if(v[x][i]==v[x][i+1])
                {
                    cnt++;
                }
                else
                {
                    cnt++;
                    s+=(to_string(cnt));
                    s+=v[x][i];
                    cnt=0;
                }
            }
        }
        v[x+1] = s;
    }
    return v[n]; 
    }

int main()
{
    int n;
    cin >> n;
    countAndSay(n);

    return 0;
}
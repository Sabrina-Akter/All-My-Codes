#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n, d, i, sum=0, count=0, last=0,flag=0,old_last=0;
    string s;
    cin >> n >> d;
    cin >> s;
    for(i=0;i<n;i++)
    {
        if(i==0 || i==old_last)
        {
            continue;
        }
        sum++;
        if(s[i]=='1')
        {
            last = i;
        }
        if(sum==d || i==n-1)
        {
            sum = 0;
            i = last;
            old_last = i;
            if(last==0)
            {
                flag=1;
                cout << "-1" << endl;
                break;
            }
            else
            {
                count++;
            }
            last = 0;
        }
    }
    if(flag==0)
    {
        cout << count << endl;
    }
    return 0;
}

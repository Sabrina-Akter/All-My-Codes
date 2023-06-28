#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, sum=0, ar[]={0,1,2,3,4,5,6,7,8,9}, c=0;
    string s, n="0123456789";
    cin >> s;
    while(1)
    {
        if(s.size()==1)
        {
            cout << "0\n";
            break;
        }
        c++;
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<n.size();j++)
            {
                if(s[i]==n[j])
                {
                    sum = sum + ar[j];
                }
            }
        }
        if(sum<10)
        {
            cout << c << endl;
            break;
        }
        else
        {
            s = "";
            stringstream ss;
            ss << sum;
            ss >> s;
            sum = 0;
        }
    }
    return 0;
}

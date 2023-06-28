#include <iostream>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll cs=0;
    string s;
    while(cin>>s)
    {
        cs++;
        if(s=="END")
        {
            break;
        }
        else
        {
            ll i, Max=0, L, R, sum=0;
            for(i=1;i<s.size();i++)
            {
                L=i-1, R=i, sum=0;
                while(1)
                {
                    if((s[L]==s[R]) && (L>=0) && (R<s.size()))
                    {
                        sum+=2;
                        L--;
                        R++;
                    }
                    else
                    {
                        Max=max(Max, sum);
                        sum=0;
                        break;
                    }
                }
                if(i>1)
                {
                    L=i-2, R=i, sum=1;
                    while(1)
                    {
                        if((s[L]==s[R]) && (L>=0) && (R<s.size()))
                        {
                            sum+=2;
                            L--;
                            R++;
                        }
                        else
                        {
                            Max=max(Max,sum);
                            sum=0;
                            break;
                        }
                    }
                }
            }
            cout << "Case " << cs << ": " << Max << endl;
        }
    }
    return 0;
}

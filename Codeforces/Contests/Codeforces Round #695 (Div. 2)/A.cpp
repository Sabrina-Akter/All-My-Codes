#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, sum,f;
    cin >> t;
    while(t--)
    {
        f=0;
        sum=0;
        cin >> n;
            if(n==1)
            {
                cout << "9";
            }
            else if(n==2)
            {
                cout << "98";
            }
            else if(n==3)
            {
                cout << "989";
            }
            else
            {
                cout << "989";
                while(1)
                {
                    for(i=0;i<=9;i++)
                    {
                        if(sum==n-3)
                        {
                            f=1;
                            break;
                        }
                        cout << i;
                        sum++;
                    }
                    if(f==1)
                    {
                        break;
                    }
                }
            }
        cout << endl;
    }
    return 0;
}

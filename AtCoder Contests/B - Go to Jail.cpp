#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, f=0, sum = 0;;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a==b)
        {
            sum++;
            if(sum==3)
            {
                f = 1;
                cout << "Yes\n";
                break;
            }
        }
        else
        {
            sum = 0;
        }
    }
    if(f==0)
    {
        cout << "No\n";
    }
    return 0;
}

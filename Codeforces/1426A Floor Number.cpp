#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, n, x, sum, f=0;
        cin >> n >> x;
        sum = 2 - x;
        for(i=0;i<=10000;i++)
        {
            sum = sum + x;
            f++;
            if(sum>=n)
            {
                break;
            }
        }
        cout << f << endl;
    }
}

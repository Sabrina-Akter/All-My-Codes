#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, k=0, sum;
    cin >> t >> i;
    sum = i;
    while(t--)
    {
        char s;
        long long n;
        cin >> s >> n;
        if(s=='+')
        {
            sum = sum + n;
        }
        else if(s=='-')
        {
            if(sum>=n)
            {
                sum = sum - n;
            }
            else
            {
                k++;
            }
        }
    }
    cout << sum << " " << k << endl;
    return 0;
}

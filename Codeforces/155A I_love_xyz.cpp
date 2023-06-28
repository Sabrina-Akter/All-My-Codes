#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, n, i, min, max, sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(i==0)
        {
            min = x;
            max = x;
        }
        else
        {
            if(x>max)
            {
                sum++;
                max = x;
            }
            else if(x<min)
            {
                sum++;
                min = x;
            }
        }
    }
    cout << sum << endl;
    return 0;
}

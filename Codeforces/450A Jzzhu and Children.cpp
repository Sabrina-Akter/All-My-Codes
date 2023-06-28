#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, max, sum=0;
    cin >> a >> b;
    max = a-1;
    long long ar[a];
    for(i=0;i<a;i++)
    {
        cin >> ar[i];
    }
    while(1)
    {
        sum = 0;
        for(i=0;i<a;i++)
        {
            ar[i] = ar[i] - b;
            if(ar[i]<=0)
            {
                ar[i] = 0;
            }
            else
            {
                max = i;
            }
            sum = sum + ar[i];
        }
        if(sum==0)
        {
            cout << max+1 << endl;
            break;
        }
    }
    return 0;
}

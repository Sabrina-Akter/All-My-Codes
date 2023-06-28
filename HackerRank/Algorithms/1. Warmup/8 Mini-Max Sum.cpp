#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[5], i, min=0, max=0;
    for(i=0;i<5;i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+5);
    for(i=0;i<5;i++)
    {
        if(i!=4)
        {
            min = min + ar[i];
        }
        if(i!=0)
        {
            max = max + ar[i];
        }
    }
    cout << min << " " << max << endl;
    return 0;
}

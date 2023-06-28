#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int t, n, count, swap, temp, i;
    cin >> t;
    while(t--)
    {
        swap = 0;
        cin >> n;
        long long ar[n];
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        while(1)
        {
            count = 0;
            for(i=0;i<n-1;i++)
            {
                if(ar[i]>ar[i+1])
                {
                    temp = ar[i];
                    ar[i] = ar[i+1];
                    ar[i+1] = temp;
                    swap++;
                    count++;
                }
            }
            if(count==0)
            {
                cout << "Optimal train swapping takes " << swap << " swaps." << endl;
                break;
            }
        }
    }
    return 0;
}

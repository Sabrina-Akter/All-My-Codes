#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x;
    cin >> n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    x = *min_element(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout << x << " " << i+1 << endl;
            break;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0,b=0,x=1;
    cin >> n;
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }
    for(i=0;i<n;i++)
    {
        if(x%2!=0)
        {
            if(N[i]>N[n-1])
            {
                a = a + N[i];
            }
            else
            {
                a = a + N[n-1];
                n = n-1;
                i = i-1;
            }
        }
        else if(x%2==0)
        {
            if(N[i]>N[n-1])
            {
                b = b + N[i];
            }
            else
            {
                b = b + N[n-1];
                n = n-1;
                i = i-1;
            }
        }
        x++;
    }
    cout << a << " " << b << endl;
    return 0;
}

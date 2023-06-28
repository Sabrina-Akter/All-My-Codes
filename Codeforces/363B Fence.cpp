#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, sum=0, n, min;
    cin >> a >> b;
    long long ar[a], N[a], M[a];
    if(a==1 || a==b)
    {
        cout << "1\n";
    }
    else
    {
        for(i=0;i<a;i++)
        {
            cin >> n;
            sum = sum + n;
            ar[i] = sum;
            if(i>=b)
            {
                N[i] = ar[i] - ar[i-b];
                M[i] = N[i];
            }
            if(i==b-1)
            {
                N[i] = ar[i];
                M[i] = N[i];
            }
        }
        for(i=0;i<b-1;i++)
        {
            N[i] = ar[a-1];
            M[i] = N[i];
        }
        sort(M,M+a);
        min = M[0];
        for(i=0;i<a;i++)
        {
            if(min==N[i])
            {
            cout << i+1-(b-1);
            break;
            }
        }
    }
    return 0;
}

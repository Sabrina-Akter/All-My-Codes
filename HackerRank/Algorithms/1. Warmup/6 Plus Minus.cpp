#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, t, x;
    double p=0, n=0, z=0;
    cin >> N;
    t = N;
    while(t--)
    {
        cin >> x;
        if(x>0)
        {
            p++;
        }
        else if(x<0)
        {
            n++;
        }
        else if(x==0)
        {
            z++;
        }
    }
    p = p/N, n = n/N, z = z/N;
    cout << fixed << setprecision(6) << p << "\n" << n << "\n" << z << endl;
    return 0;
}

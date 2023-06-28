#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, j, Jsum, Msum, c=0;
    double x, a, b;
    cin >> t;
    for(i=0;i<t;i++)
    {
        c++;
        Msum = 0;
        Jsum = 0;
        cin >> n;
        for(j=0;j<n;j++)
        {
            cin >> x;
            x = x+1;
            a = (x/30);
            Msum = Msum + (ceil(a)*10);
            b = (x/60);
            Jsum = Jsum + (ceil(b)*15);
        }
        if(Msum<Jsum)
        {
            cout << "Case " << c << ": Mile " << Msum << endl;
        }
        else if(Jsum<Msum)
        {
            cout << "Case " << c << ": Juice " << Jsum << endl;
        }
        else if(Jsum==Msum)
        {
            cout << "Case " << c << ": Mile Juice " << Msum << endl;
        }
    }
    return 0;
}

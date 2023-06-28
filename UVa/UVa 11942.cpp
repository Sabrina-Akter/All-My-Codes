#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, a, b, c, d, f = 0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        a = 0, b = 0, c = 0, d = 0;
        f++;
        int N[10];
        for(j=0;j<10;j++)
        {
            cin >> N[j];
        }
        for(j=0;j<9;j++)
        {
            if((a==0) && (N[j]<N[j+1]))
            {
                a=1;
            }
            if((a==1) && (N[j]<N[j+1]))
            {
                b++;
            }
            if((c==0) && (N[j]>N[j+1]))
            {
                c=1;
            }
            if((c==1) && (N[j]>N[j+1]))
            {
                d++;
            }
        }
        if(f==1)
        {
            cout << "Lumberjacks:\n";
        }
        if(b==9 || d==9)
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }
    return 0;
}

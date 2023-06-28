#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z,i;

    while(1)
    {
            cin >> a >> b >> c;

            if(a==0 && b==0 && c==0)
            {
                break;
            }

            int A[3]={a,b,c};

            z = max((max(a,b)),(max(b,c)));
            x = min((min(a,b)),(min(b,c)));

            for(i=0;i<3;i++)
            {
                if((A[i]!=z) && (A[i]!=x))
                   {
                       y = A[i];
                       break;
                   }
            }

            if((x*x)+(y*y)==(z*z))
            {
                cout << "right\n";
            }
            else
            {
                cout << "wrong\n";
            }
    }

    return 0;
}

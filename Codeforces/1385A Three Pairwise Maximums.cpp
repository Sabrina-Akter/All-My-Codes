#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll x, y, z, t;
void show()
{
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        if((y==z)&&(x!=y)&&(x!=z)&&(y>x))
        {
            cout << "YES\n";
            cout << max(y,x) << " " << min(y,x) << " " << min(y,x) << endl;
        }
        else if((x==z)&&(y!=x)&&(y!=z)&&(x>y))
        {
            cout << "YES\n";
            cout << max(x,y) << " " << min(x,y) << " " << min(x,y) << endl;
        }
        else if((x==y)&&(x!=z)&&(z!=y)&&(x>z))
        {
            cout << "YES\n";
            cout << max(x,z) << " " << min(x,z) << " " << min(x,z) << endl;
        }
        else if((x==y)&&(x==z))
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    show();
    return 0;
}

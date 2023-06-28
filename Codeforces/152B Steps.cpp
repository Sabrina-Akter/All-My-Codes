#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, m, x, y, N, i, a, b, px, py, nx, ny, moves=0, A, B, MIN, cx1, cy1, cx2, cy2, MAX, last_x, last_y,flag=0;
    cin >> n >> m;
    cin >> x >> y;
    last_x=x, last_y=y;
    cin >> N;
    for(i=0;i<N;i++)
    {
        flag=0;
        cin >> a >> b;
        px=n-x,py=m-y,nx=x-1,ny=y-1;
        if(a>0)
        {
            if(px==0)
            {
                A = 0;
            }
            else
            {
                A = max(px,a)/min(px,a);
            }
        }
        else if(a==0)
        {
            A = 0;
        }
        else if(a<0)
        {
            if(nx==0)
            {
                A=0;
            }
            else
            {
                A = max(nx,a)/min(nx,a);
            }
        }
        //cout << "A = " << A << endl;
        if(b>0)
        {
            if(py==0)
            {
                B=0;
            }
            else
            {
                B = max(py,b)/min(py,b);
            }
        }
        else if(b==0)
        {
            B = 0;
        }
        else if(b<0)
        {
            if(ny==0)
            {
                B=0;
            }
            else
            {
                B = max(ny,b)/min(ny,b);
            }
        }
        //cout << "B = " << B << endl;
        MAX = max(abs(A),abs(B));
        //cout << "MAX = " << MAX << endl;
        MIN = min(abs(A),abs(B));
        //cout << "MIN = " << MIN << endl;
        cx1 = a*MAX, cy1 = b*MAX;
        //cout << "cx1 = " << cx1 << " cy1 = " << cy1 << endl;
        cx2 = a*MIN, cy2 = b*MIN;
        //cout << "cx2 = " << cx2 << " cy2 = " << cy2 << endl;
        if(((x+cx1)>0) && ((x+cx1<=n)) && ((y+cy1)>0) && ((y+cy1)<=m))
        {
            x = (x+cx1), y = (y+cy1);
            flag=1;
            //moves = moves + abs(MIN);
            //cout << "1. x = " << x << " and y = " << y << endl;
        }
        else if(((x+cx2)>0) && ((x+cx2<=n)) && ((y+cy2)>0) && ((y+cy2)<=m))
        {
            x = (x+cx2), y = (y+cy2);
            flag=2;
            //moves = moves + abs(MIN);
            //cout << "2. x = " << x << " and y = " << y << endl;
        }
        if(last_x==x && last_y==y)
        {
            continue;
        }
        else
        {
            if(flag==1)
            {
                moves = moves + abs(MAX);
                //cout << "****************moves = " << moves << endl;
            }
            else if(flag==2)
            {
                moves = moves + abs(MIN);
                //cout << "****************moves = " << moves << endl;
            }
        }
        last_x=x, last_y=y;
    }
    cout << moves << endl;
    return 0;
}

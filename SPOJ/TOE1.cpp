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
    int n;
    cin >> n;
    while(n--)
    {
        int i, j, a, B, C, D, E, F, G, H, I, zero=0, one=0;
        char A[3][3];
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin >> A[i][j];
                if(A[i][j]=='O')
                {
                    zero++;
                }
                else if(A[i][j]=='X')
                {
                    one++;
                }
            }
        }
        //cout << "zero = " << zero << ", one = " << one << endl;
        a=A[0][0]-79, B=A[0][1]-79, C=A[0][2]-79, D=A[1][0]-79, E=A[1][1]-79, F=A[1][2]-79, G=A[2][0]-79, H=A[2][1]-79, I=A[2][2]-79;
        if(((a==0 && B==0 && C==0)||(D==0 && E==0 && F==0)||(G==0 && H==0 && I==0) || (a==0 && D==0 && G==0) || (B==0 && E==0 && H==0) || (C==0 && F==0 && I==0) || (a==0 && E==0 && I==0) || (C==0 && E==0 && G==0)) && (zero>one))
           {
               cout << "no" << endl;
           }
           else
           {
               cout << "yes" << endl;
           }
    }
    return 0;
}

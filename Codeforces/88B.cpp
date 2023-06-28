/*My mistakes:
I made 2 mistakes in the code for which, I had to literally submit the code 12 times!
At the 12th attempt I finally realized that, the size of the array places a very significant role!
On line-23, I should have declared a large number.
On line-27, I should have declared the number mentioned in the constraints.
*/

#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll x, y, i, j, k, n, x1, x2, y1, y2, c, q, sum=0, up=0, ans=0;
    double X1, X2, Y1, Y2, dif;
    char cc;
    string st;
    cin >> x >> y >> n;
    ll B[100000]; //Mistake: B[27]
    fill(B, B+10000, 0);
    vector <pair<ll, ll> > v;
    char A[40][40]; //Mistake: A[x+1][y+1]
    fill(A[0], A[0]+40*40, ' ');
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cin >> A[i][j];
            B[A[i][j]-96] = 2;
            if(A[i][j]=='S')
            {
                v.pb(make_pair(i, j));
            }
        }
    }
    for(i=0;i<v.size();i++)
    {
        for(j=1;j<=x;j++)
        {
            for(k=1;k<=y;k++)
            {
                if(A[j][k]!='S')
                {
                    x1 = v[i].first;
                    y1 = v[i].second;
                    x2 = j;
                    y2 = k;
                    X1=x1, X2=x2, Y1=y1, Y2=y2;
                    dif = sqrt(((X1-X2)*(X1-X2))+((Y1-Y2)*(Y1-Y2)));
                    if(dif<=n)
                    {
                        c = (A[j][k]) - 96;
                        B[c] = 1;
                        /*cout << "Dif = " << dif << endl;
                        cout << "c = " << c << endl;
                        cout << "B[" << c << "] = " << B[c] << endl;*/
                    }
                }
            }
        }
    }
    cin >> q;
    cin.ignore(256,'\n');
    cin >> st;
    for(i=0;i<st.size();i++)
    {
        if(isupper(st[i]))
        {
            up=1;
            cc = tolower(st[i]);
            if(B[(tolower(st[i]))-96]==2)
            {
                //cout << "1.1:B[" << cc-96 <<"] = " << B[cc-96] << endl;
                sum++;
            }
            else if(B[cc-96]==0)
            {
                ans = 1;
                //cout << "1.2:B[" << cc-96 <<"] = " << B[cc-96] << endl;
            }
        }
        else if(islower(st[i]))
        {
            if((B[st[i]-96]==1) || (B[st[i]-96]==2))
            {
                continue;
            }
            else if(B[st[i]-96]==0)
            {
                ans = 1;
                //cout << "2.B[" << st[i] <<"] = " << B[st[i]-96] << endl;
            }
        }
    }
    if((up==1 && v.size()==0) || (ans==1))
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << sum << endl;
    }
    return 0;
}

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
    double r1, p1, p2, i, x, N, A, B, S1, S2;
    vll R1, P1, P2;
    cin >> r1;
    for(i=0;i<r1;i++)
    {
        cin >> x;
        R1.pb(x);
    }
    cin >> p1;
    for(i=0;i<p1;i++)
    {
        cin >> x;
        P1.pb(x);
    }
    cin >> p2;
    for(i=0;i<p2;i++)
    {
        cin >> x;
        P2.pb(x);
    }
    cin >> A >> B;
    r1 = *max_element(R1.begin(),R1.end());
    p1 = *max_element(P1.begin(),P1.end());
    p2 = *min_element(P2.begin(),P2.end());
    S1 = ((r1*r1)*p1*B), S2 = ((p1*B)+(p2*A));
    N = sqrt(S1/S2);
    cout << fixed << setprecision(12) << N << endl;
    return 0;
}

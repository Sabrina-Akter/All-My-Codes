// #include <bits/stdc++.h>
// using namespace std;

// #define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define ll long long int
// #define vll vector <ll>
// #define pb push_back
// #define ff first
// #define ss second
// #define lb lower_bound
// #define ub upper_bound
// #define all(x) x.begin(), x.end()
// #define ms(x) memset(x, 0, sizeof x)

// const int MOD = 1000000007;
// const char nl = '\n';

// int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
// int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

// int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
// int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

// int main()
// {
//     fastt;

//     return 0;
// }
#include <bits/stdc++.h>

#define EPSILON 0.000000001
#define ll long long int
using namespace std;
#define fasst ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fasst;
    ll t, i, j, n, k;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n >> k;
        ll a[n + 5];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a, a + n);
        ll sum = 0,mx=0,cc=0,p=n-1;
        for (j = n-1; j >=0; j--) {
            sum += a[j];
            cc++;
            if (sum >= k) {
                mx = max(mx, cc);
                sum-=a[p];
                p--;
                cc--;
            }
        }
        cout << mx << endl;
    }
}
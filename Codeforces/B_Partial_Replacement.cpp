#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++){
        int n,k;
        cin >> n >> k;
        string str;
        cin >> str;

        int count = 0;
        int i = 0, j = n-1;
        int lb = -1,le = -1;
        while(i < n && str[i] != '*')
            i++;
        if(i == n){
            cout << count << endl;
            continue;
        }else{ 
            str[i] ='x';
            lb = i;
            i += k;
            count++;
        }
        while(j >= 0  && str[j] != '*')
            j--;
        if(j < 0){
            cout << count << endl;
            continue;
        }else{
            str[j] ='x';
            le = j;
            j -= k;
            count++;
        }
        while(le-lb > k){
            if(le-lb > k){
                while(i >= 0 && str[i] != '*')
                    i--;
                lb = i;
                count++;
                i += k;
            }
            if(le-lb > k){
                while( j < n && str[j] != '*')
                    j++;
                le = j;
                count++;
                j -= k;
            }
        }
        cout << count << endl;
    }
    return 0;
}
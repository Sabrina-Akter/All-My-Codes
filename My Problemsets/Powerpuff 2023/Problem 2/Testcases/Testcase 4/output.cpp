#include <bits/stdc++.h>
using namespace std;
#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
const char nl = '\n';
int main() {
    freopen("Input 4.txt", "r", stdin);
    freopen("Output 4.txt", "w", stdout);
    fastt;
    ll trees, need, i;
    cin >> trees >> need;
    vector <ll> v(trees);
    for(i=0;i<trees;i++)
    {
        cin >> v[i];
    }
    ll left = 0, right = *max_element(v.begin(), v.end()) , mid, ans, f=0;
    while(left<=right)
    {
        double L = left, R = right, check;
        check = (L+R)/2;
        mid = (left+right)/2;
        if(mid!=check)
        {
            mid++;
        }
        ll sum=0;
        for(i=0;i<trees;i++)
        {
            if(v[i]>mid)
            {
                sum+=(v[i]-mid);
            }
        }
        if(sum==need)
        {
            ans = mid;
            break;
        }
        else if(sum>need)
        {
            left = mid;
            ans = left;
        }
        else if(sum<need)
        {
            right = mid-1;
        }
        if(left==right)
        {
            f++;
            if(f==2)
            {
                break;
            }
        }
    }
    cout << ans << nl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
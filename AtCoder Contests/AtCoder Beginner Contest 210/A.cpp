#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll f(ll a[],ll N,ll M){
   map<ll,ll> hashMap;
   ll uniqueCountWindow=0;
   ll uniqueCount=0;
   for(ll i=0;i<M;i++) {
      if(hashMap.find(a[i])==hashMap.end()) {
         hashMap.insert(make_pair(a[i],1));
         uniqueCountWindow++;
      }
      else
         hashMap[a[i]]++;
      }
      uniqueCount = uniqueCountWindow;
      for(ll i=M;i<N;i++) {
         if(hashMap[a[i-M]]==1) {
            hashMap.erase(a[i-M]);
            uniqueCountWindow--;
         }
         else
            hashMap[a[i-M]]--;
            if(hashMap.find(a[i])==hashMap.end()){
               hashMap.insert(make_pair(a[i],1));
               uniqueCountWindow++;
            }
            else
               hashMap[a[i]]++;
               uniqueCount=max(uniqueCount,uniqueCountWindow);
         }
      return uniqueCount;
}
int main()
{
   ll n, k, i, L;
   cin >> n >> k;
   ll arr[n+5]={0};
   for(i=0;i<n;i++)
   {
       cin >> arr[i];
   }
   L = f(arr, n, k);
   if(L>k)
   {
       cout << k << endl;
   }
   else
   {
       cout << L << endl;
   }
}


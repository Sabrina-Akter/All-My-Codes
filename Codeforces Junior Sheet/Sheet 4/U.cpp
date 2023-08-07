#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    vll v;
    ll e, E, g, G, y, Y, p, P, t, T;
    string s;
    cin >> s;
    e = count(s.begin(), s.end(), 'e');
    E = count(s.begin(), s.end(), 'E');
    g = count(s.begin(), s.end(), 'g');
    G = count(s.begin(), s.end(), 'G');
    y = count(s.begin(), s.end(), 'y');
    Y = count(s.begin(), s.end(), 'Y');
    p = count(s.begin(), s.end(), 'p');
    P = count(s.begin(), s.end(), 'P');
    t = count(s.begin(), s.end(), 't');
    T = count(s.begin(), s.end(), 'T');
    v.pb(e+E);
    v.pb(g+G);
    v.pb(y+Y);
    v.pb(p+P);
    v.pb(t+T);
    cout << *min_element(v.begin(), v.end()) << endl;
    return 0;
}

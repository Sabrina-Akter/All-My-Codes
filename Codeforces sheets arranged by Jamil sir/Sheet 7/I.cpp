#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll vowel(string s, ll Size)
{
    if(Size<0)
    {
        return 0;
    }
    char c = tolower(s[Size]);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return 1 + vowel(s, Size-1);
    }
    return vowel(s, Size-1);
}

int main()
{
    fastt;
    char c;
    string s;
    getline(cin, s);
    cout << vowel(s, s.size()-1) << endl;
    return 0;
}

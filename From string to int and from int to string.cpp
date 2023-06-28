#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    //1
    ll n = 999999999999999999;
    string s = to_string(n);
    cout << "From integer to string: " << s << endl;
    //2
    string S = "999999999";
    ll N = stoi(S);
    cout << "From string to integer: " << N << endl;
    return 0;
}


//1. to_string -> upto 15 (if data type is double), upto 18 (if data type if ll)
//2. stoi -> upto 9 characters

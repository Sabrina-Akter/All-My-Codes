#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, i, sum=0, x;
    cin >> n;
    string s, s1 = "Tetrahedron", s2 = "Cube", s3 = "Octahedron", s4 = "Dodecahedron", s5 = "Icosahedron";
    for(i=0;i<n;i++)
    {
        cin >> s;
        if(s==s1)
        {
            x = 4;
        }
        else if(s==s2)
        {
            x = 6;
        }
        else if(s==s3)
        {
            x = 8;
        }
        else if(s==s4)
        {
            x = 12;
        }
        else if(s==s5)
        {
            x = 20;
        }
        sum = sum+x;
    }
    cout << sum << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <int, string> m;
    map <int, string>::iterator it;

    m[1] = "Sabrina";
    m[2] = "Sabiha";

    it = m.begin();
    cout << it->first << endl;
    it++;
    cout << it->first << endl;
    for(it=m.begin();it!=m.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

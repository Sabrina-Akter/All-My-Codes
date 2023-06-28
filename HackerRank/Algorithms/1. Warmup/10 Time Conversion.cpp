#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st, h="", m="", s="";
    int i, hr=0;
    cin >> st;
    h = h + st[0] + st[1], m = m + st[3] + st[4], s = s + st[6] + st[7];

    stringstream degree(h);
    degree >> hr;
    if(st[8]=='A')
    {
        if(h=="12")
        {
            cout << "00" << ":" << m << ":" << s << endl;
        }
        else
        {
            cout << h << ":" << m << ":" << s << endl;
        }
    }
    else if(st[8]=='P')
    {
        if(h=="12")
        {
            cout << "12" << ":" << m << ":" << s << endl;
        }
        else
        {
            cout << hr + 12 << ":" << m << ":" << s << endl;
        }
    }
    return 0;
}

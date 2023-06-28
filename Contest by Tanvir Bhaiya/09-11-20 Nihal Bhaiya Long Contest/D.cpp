#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i1, y1=0,y2=0, c1, c2;
    string a1, b1;
    cin >> a1 >> b1;
    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());
    set <char> x1;
    set <char>:: iterator it;
    for(i1=0;i1<a1.size();i1++)
    {
        x1.insert(a1[i1]);
    }
    for (it = x1.begin(); it != x1.end(); ++it)
    {
        c1 = count(a1.begin(), a1.end(), *it);
        c2 = count(b1.begin(), b1.end(), *it);
        if(c2>=c1)
        {
            y1 = y1 + c1;
        }
        else
        {
            y1 = y1 + c2;
        }
    }
    cout << y1 << " " << endl;
    return 0;
}

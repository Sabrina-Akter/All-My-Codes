#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, one, two, three, four, sum, t;
    vector <int> N;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        N.push_back(x);
    }
    one = count(N.begin(), N.end(), 1);
    two = count(N.begin(), N.end(), 2);
    three = count(N.begin(), N.end(), 3);
    sum = count(N.begin(), N.end(), 4);
    while(three!=0 && one!=0)
    {
        three--;
        one--;
        sum++;
    }
    t = ((2*two) + one);
    if(t%4!=0)
    {
        t = (t/4) + 1;
    }
    else
    {
        t = t/4;
    }
    sum = sum + three + t;
    cout << sum << endl;
    return 0;
}


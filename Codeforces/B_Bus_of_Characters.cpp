#include <bits/stdc++.h>
using namespace std;

int n, t;
string s;
pair<int, int> p[200100];
stack<int> st;

int main() 
{
    cin >> n;

    for (int i = 0, a; i < n; i++) 
    {
        cin >> a;
        p[i] = make_pair(a, i);
    }

    sort(p, p + n);
    cin >> s;

    for (int i = 0; i < 2 * n; i++) 
    {
        if (s[i] == '0') 
        {
            cout << p[t].second + 1 << " ";
            st.push(p[t].second);
            t++;
        } 
        else 
        {
            cout << st.top() + 1 << " ";
            st.pop();
        }
    }

    return 0;
}

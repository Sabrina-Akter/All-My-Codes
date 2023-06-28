/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, flag=0;
    cin >> n;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin >> s[i];
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s[i] << flag << endl;
        }
        flag = 0;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <string, int> m;
    string s;
    while(n--)
    {
        cin >> s;
        if(m.count(s)==0)
        {
            cout << "OK" << endl;
            m[s]=1;
        }
        else
        {
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
    return 0;
}

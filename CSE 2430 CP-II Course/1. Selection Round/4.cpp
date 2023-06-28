#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int i;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            cout << "b";
        }
        else if(s[i]=='e')
        {
            cout << "f";
        }
        else if(s[i]=='i')
        {
            cout << "j";
        }
        else if(s[i]=='o')
        {
            cout << "p";
        }
        else if(s[i]=='u')
        {
            cout << "v";
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}

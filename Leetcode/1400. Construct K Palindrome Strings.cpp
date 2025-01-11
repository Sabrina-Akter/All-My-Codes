#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string s, int k) 
{
    map <char, int> freq;
    int odd = 0;
    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
        if(freq[s[i]] % 2 == 1) odd++;
        else odd--;
    }
    return (odd <= k && s.size() >= k);
}

int main()
{
    

    return 0;
}
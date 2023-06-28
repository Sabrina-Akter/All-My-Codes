#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, y=0, w=0;
    string a, b;
    char ch, C;
    cin >> a >> b;
    set <char> x;
    set <char>:: iterator it;
    map <char, long long> map_a, map_b;
    for(i=0;i<a.size();i++)
    {
        x.insert(a[i]);
    }
    for(it = x.begin(); it != x.end(); ++it)
    {
        ch = *it;
        map_a.insert(make_pair(ch,count(a.begin(), a.end(), ch)));
        map_b.insert(make_pair(toupper(ch),count(b.begin(), b.end(), toupper(ch))));
        map_b.insert(make_pair(tolower(ch),count(b.begin(), b.end(), tolower(ch))));
        if(map_b[ch]>=map_a[ch])
        {
            y = y + map_a[ch];
            map_b[ch] = map_b[ch] - map_a[ch];
            map_a[ch] = 0;
        }
        else
        {
            y = y + map_b[ch];
            map_a[ch] = map_a[ch] - map_b[ch];
            map_b[ch] = 0;
        }
    }

    for(it = x.begin(); it != x.end(); ++it)
    {
        ch = *it;
        if((map_a[ch])>0)
        {
            if(isupper(ch))
            {
                C = tolower(ch);
            }
            else
            {
                C = toupper(ch);
            }
            if(map_b[C]>=map_a[ch])
            {
                w = w + map_a[ch];
            }
            else
            {
                w = w + map_b[C];
            }
        }
    }
    cout << y << " " << w << endl;
    return 0;
}

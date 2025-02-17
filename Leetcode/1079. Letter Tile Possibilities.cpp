#include <bits/stdc++.h>
using namespace std;

void f(string temp, string tiles, int i, unordered_map <string, int> &freq, int n)
{   
    freq[temp];
    if(i + 1 < n)
    {
        f(temp, tiles, i + 1, freq, n);
        f(temp + tiles[i + 1], tiles, i + 1, freq, n);
    }
    return;
}
int numTilePossibilities(string tiles) 
{
    sort(tiles.begin(), tiles.end());
    int n = tiles.size();
    string temp;
    unordered_map <string, int> freq;
    do
    {
        temp += tiles[0];
        f(temp, tiles, 0, freq, n);
        temp = "";
    }
    while(next_permutation(tiles.begin(), tiles.end()));

    return freq.size();
}

int main()
{
    

    return 0;
}
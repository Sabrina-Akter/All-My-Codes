#include <bits/stdc++.h>
using namespace std;

int minimumPushes(string word) 
{
    vector <int> letter(26);
    for(int i = 0; i < word.size(); i++)
    {
        letter[word[i] - 'a']++;
    }
    sort(letter.rbegin(), letter.rend());
    int sum = 0;
    double x, eight, div;
    for(int i = 0; i < letter.size(); i++)
    {
        if(letter[i] == 0) break;
        x = i + 1;
        eight = 8;
        div = ceil(x / eight) * letter[i];
        sum += div;
    }
    return sum;
}

int main()
{
    

    return 0;
}
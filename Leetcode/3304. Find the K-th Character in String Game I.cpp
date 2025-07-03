#include <bits/stdc++.h>
using namespace std;

char kthCharacter(int k) 
{
    string word = "a", temp;
    while(word.size() <= k)
    {
        temp = word;
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] == 'z') temp[i] = 'a';
            else temp[i] = temp[i] + 1;
        }
        word += temp;
    }
    return word[k - 1];
}

int main()
{
    
    return 0;
}
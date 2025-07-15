#include <bits/stdc++.h>
using namespace std;

bool isValid(string word) 
{
    if(word.size() < 3) return false;
    bool vowel = false, cons = false;
    for(int i = 0; i < word.size(); i++)
    {
        if(isalpha(word[i]))
        {
            char c = tolower(word[i]);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowel = true;
            else cons = true;
        }
        
        if((word[i] >= '0' && word[i] <= '9') || isalpha(word[i]))
        {
            continue;
        }
        else return false;
    }
    if(vowel && cons) return true;
    else return false;
}

int main()
{
    

    return 0;
}
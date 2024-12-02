#include <bits/stdc++.h>
using namespace std;

int isPrefixOfWord(string sentence, string searchWord) 
{
    int x = 0, space = 1;
    bool yes = false;
    for(int i = 0; i < sentence.size(); i++)
    {
        if(i == 0 || sentence[i - 1] == ' ')
        {
            if(i > 0 && sentence[i - 1] == ' ') space++;
            if(sentence[i] == searchWord[x]) yes = true;
        }

        if(yes && sentence[i] == searchWord[x])
        {
            x++;
            if(x == searchWord.size()) return space;
        }
        else
        {
            yes = false;
            x = 0;
        }
    }

    return -1;
}

int main()
{
    

    return 0;
}
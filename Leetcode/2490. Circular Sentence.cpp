#include <bits/stdc++.h>
using namespace std;

bool isCircularSentence(string sentence) 
{
    for(int i = 0; i < sentence.size(); i++)
    {
        if(sentence[i] == ' ')
        {
            if(sentence[i - 1] != sentence[i + 1]) return false;
        }
        else if(i == sentence.size() - 1)
        {
            if(sentence[i] != sentence[0]) return false;                
        }
    }
    return true;
}

int main()
{
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string compressedString(string word) 
{
    string comp;
    int cnt = 0;
    char c;
    for(int i = 0; i < word.size(); i++)
    {
        if(i + 1 < word.size())
        {
            if(word[i + 1] != word[i])
            {
                cnt++;
                c = (cnt + '0');
                comp += c;
                comp += word[i];  
                cnt = 0;                  
            }
            else
            {
                cnt++;
                if(cnt == 9)
                {
                    c = (cnt + '0');
                    comp += c;
                    comp += word[i];  
                    cnt = 0;
                }
            }
        }
        else
        {
            cnt++;
            c = (cnt + '0');
            comp += c;
            comp += word[i];
            cnt = 0;
        }
    }
    return comp;
}

int main()
{
    

    return 0;
}
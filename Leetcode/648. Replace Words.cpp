#include <bits/stdc++.h>
using namespace std;

string replaceWords(vector<string>& dictionary, string sentence) 
{
    unordered_map <string, int> exist;
    for(auto &it : dictionary)
    {
        exist[it] = 1;
    }
    sentence += ' ';
    string ans, temp;
    bool found = false;
    for(int i = 0; i < sentence.size(); i++)
    {
        if(exist.count(temp) == true && found == false) 
        {
            ans += temp;
            found = true;
        }
        if(sentence[i] == ' ') 
        {
            if(found == false) ans += temp;
            if(i != sentence.size() - 1) ans += ' ';
            temp = "";
            found = false;
        }
        else if(found == false)
        {
            temp += sentence[i];
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}
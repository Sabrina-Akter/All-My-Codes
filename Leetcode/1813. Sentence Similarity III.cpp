#include <bits/stdc++.h>
using namespace std;

bool areSentencesSimilar(string sentence1, string sentence2) 
{
    if(sentence1.size() == sentence2.size())
    {
        if(sentence1 == sentence2) return true;
        else false;
    }
    string s1 = sentence1, s2 = sentence2;
    if(s2.size() < s1.size()) swap(s1, s2);
    vector <string> v1, v2;
    string temp;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == ' ' || i == s1.size() - 1)
        {
            if(i == s1.size() - 1) temp += s1[i];
            v1.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s1[i];
        }
    }
    temp = "";
    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == ' ' || i == s2.size() - 1)
        {
            if(i == s2.size() - 1) temp += s2[i];
            v2.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s2[i];
        }
    }
    int cnt = 0, left = 0, right = v1.size() - 1, i = 0, j = v2.size() - 1;
    while(left <= right)
    {
        if(v1[left] == v2[i] || v1[right] == v2[j])
        {
            if(v1[left] == v2[i])
            {
                left++;
                i++;
                cnt++;
            }
            else if(v1[right] == v2[j])
            {
                right--;
                j--;
                cnt++;
            }
        }
        else break;
    }
    if(cnt == v1.size()) return true;
    else return false;
}

int main()
{
    

    return 0;
}
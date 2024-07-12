#include <bits/stdc++.h>
using namespace std;

int maximumGain(string s, int x, int y) 
{
    int ans = 0;
    string X, Y;
    if(x >= y)
    {
        X = "ab";
        Y = "ba";
    }
    else
    {
        X = "ba";
        Y = "ab";
        swap(x, y);
    }
    stack <char> st;
    string temp;
    for(int i = 0; i < s.size(); i++)
    {
        if(st.empty() == false && st.top() == X[0] && s[i] == X[1])
        {
            st.pop();
            temp.pop_back();
            ans += x;
        }
        else
        {
            st.push(s[i]);
            temp += s[i];
        }
    }
    stack <char> st2;
    for(int i = 0; i < temp.size(); i++)
    {
        if(st2.empty() == false && st2.top() == Y[0] && temp[i] == Y[1])
        {
            st2.pop();
            ans += y;
        }
        else
        {
            st2.push(temp[i]);
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}
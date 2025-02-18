#include <bits/stdc++.h>
using namespace std;

string smallestNumber(string pattern) 
{
    vector <int> v;
    stack <int> st;
    for(int i = 0; i < pattern.size() + 1; i++)
    {
        st.push(i + 1);
        if(i == pattern.size() || pattern[i] == 'I')
        {
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
        }
    }
    string ans;
    for(auto &it : v) ans += (it + '0');
    return ans;
}

int main()
{
    

    return 0;
}
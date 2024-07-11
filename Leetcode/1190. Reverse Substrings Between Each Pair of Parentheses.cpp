#include <bits/stdc++.h>
using namespace std;

    string reverseParentheses(string s) 
    {
        stack <char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                string temp;
                while(1)
                {
                    if(st.top() == '(')
                    {
                        st.pop();
                        for(int j = 0; j < temp.size(); j++)
                        {
                            st.push(temp[j]);
                        }
                        break;
                    }
                    else
                    {
                        temp += st.top();
                    }
                    st.pop();
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans;
        while(st.empty() == false)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

int main()
{
    

    return 0;
}
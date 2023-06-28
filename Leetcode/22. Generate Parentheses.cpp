#include <bits/stdc++.h>
using namespace std;

vector<string> generateParenthesis(int n) {
        string s;
        int i;
        for(i=0;i<n;i++)
        {
            s+='(';
        }
        for(i=0;i<n;i++)
        {
            s+=')';
        }
        sort(s.begin(), s.end());
        vector<string> v;
        do{
            stack <char> st;
            int f=0;
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='(')
                {
                    st.push('(');
                }
                else
                {
                    if(st.empty()==0)
                    {
                        st.pop();
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==0 && st.size()==0)
            {
                v.push_back(s);
            }
        }while(next_permutation(s.begin(), s.end()) && s[0]=='(');
        return v;
    }

int main()
{
    int n;
    cin >> n;
    generateParenthesis(n);
    return 0;
}
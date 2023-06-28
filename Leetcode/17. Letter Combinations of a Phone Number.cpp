#include <bits/stdc++.h>
using namespace std;



vector<string> letterCombinations(string digits) {
    map <char, string> m;
    m['2']="abc", m['3']="def", m['4']="ghi", m['5']="jkl", m['6']="mno", 
    m['7']="pqrs", m['8']="tuv", m['9']="wxyz";
    vector<string> ans;
    string s;
    int i, j, k, l;
    
    for(i=0;i<m[digits[0]].size();i++)
    {
        s+=m[digits[0]][i];
        if(digits.size()>1)
        {
            for(j=0;j<m[digits[1]].size();j++)
            {
                s+=m[digits[1]][j];
                if(digits.size()>2)
                {
                    for(k=0;k<m[digits[2]].size();k++)
                    {
                        s+=m[digits[2]][k];
                        if(digits.size()>3)
                        {
                            for(l=0;l<m[digits[3]].size();l++)
                            {
                                s+=m[digits[3]][l];
                                cout << s << endl;
                                ans.push_back(s);
                                s.pop_back();
                            }
                        }
                        else
                        {
                            cout << s << endl;
                            ans.push_back(s);
                        }
                        s.pop_back();
                    }
                }
                else
                {
                    cout << s << endl;
                    ans.push_back(s);
                }
                s.pop_back();
            }
        }
        else
        {
            cout << s << endl;
            ans.push_back(s);
        }
        s="";
    }
    return ans;
    }

int main()
{
    string digits = "2";
    letterCombinations(digits);
    return 0;
}
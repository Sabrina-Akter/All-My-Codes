#include <bits/stdc++.h>
using namespace std;

    int mx=0;

    void f(vector<string>& arr, string& s, int ind)
    {
        if(ind==arr.size()-1)
        {
            int i, f=0;
            map <char, int> m;
            for(i=0;i<s.size();i++)
            {
                m[s[i]]++;
                if(m[s[i]]>1)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                if(s.size()>mx)
                {
                    mx = s.size();
                }
            }
        }
        else
        {
            f(arr, s, ind+1);
            string temp = s;
            s+=arr[ind+1];
            f(arr, s, ind+1);
            s = temp;
        }
    }

    int maxLength(vector<string>& arr) {
        string s;
        int ind;
        f(arr, s, -1);
        return mx;
    }

int main()
{
    vector<string> arr = {"aaa"};
    maxLength(arr);
    return 0;
}
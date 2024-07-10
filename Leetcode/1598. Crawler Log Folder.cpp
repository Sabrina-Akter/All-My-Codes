#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<string>& logs) 
{
    stack <string> st;
    for(int i = 0; i < logs.size(); i++)
    {
        if(logs[i] == "../")
        {
            if(st.empty() == false)
            {
                st.pop();
            }
        }
        else if(logs[i] != "./")
        {
            st.push(logs[i]);
        }
    }
    return st.size();
}

int main()
{
    

    return 0;
}
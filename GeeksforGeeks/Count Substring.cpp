#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSubstring(string s) {
        int a=0,b=0,c=0;
        int start=0; int count=0;
        int n=s.size();
        for(int end=0;end<n;end++)
        {   
            if(s[end]=='a') a++;
            else if(s[end]=='b') b++;
            else c++;
            while(a&&b&&c)
            {
                if(s[start]=='a') a--;
                else if(s[start]=='b') b--;
                else c--;
                start++;
            }
            count+=end-start+1;
        }
        return (n*(n+1))/2-count;
    }
};

int main()
{
    

    return 0;
}
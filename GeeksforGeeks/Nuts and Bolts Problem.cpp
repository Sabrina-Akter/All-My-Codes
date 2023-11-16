#include <bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution
{
public:	

	void matchPairs(char nuts[], char bolts[], int n) 
	{
	    map <char, int> mp;
	    string s = "!#$%&*@^~";
	    for(int i = 0; i < n; i++) mp[nuts[i]] = 1;
	    int i=0;
	    for(auto &x:s)
	    {
	        if(mp.count(x) == true)
	        {
	           nuts[i] = x;
	           bolts[i] = x;
	           i++;
	        }
	    }
	}
};

int main()
{
    

    return 0;
}
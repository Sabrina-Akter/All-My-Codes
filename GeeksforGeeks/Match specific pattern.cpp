//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}
// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector <string> dict, string pattern)
{
       vector <string> ans;
       for(int i = 0; i < dict.size(); i++)
       {
           string word = dict[i];
           if(word.size() == pattern.size())
           {
               unordered_map <char, char> mp1, mp2;
               bool match = true;
               for(int j = 0; j < word.size(); j++)
               {
                   if(mp1.count(word[j]) == false && mp2.count(pattern[j]) == false)
                   {
                       mp1[word[j]] = pattern[j];
                       mp2[pattern[j]] = word[j];
                   }
                   else if(mp1.count(word[j]) == true && mp2.count(pattern[j]) == true && mp1[word[j]] == pattern[j] && mp2[pattern[j]] == word[j])
                   {
                       continue;
                   }
                   else
                   {
                       match = false;
                       break;
                   }
               }
               if(match == true) ans.push_back(word);
           }
       }
       return ans;
}
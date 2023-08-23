//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string S, int N)
    {
        sort(S.begin(), S.end());
        string vow, con;
        int i;
        for(i=0;i<N;i++)
        {
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
            {
                vow+=S[i];
            }
            else
            {
                con+=S[i];
            }
        }
        long long size1 = vow.size(), size2 = con.size();
        if(abs(size1-size2)<=1)
        {
            string res;
            int j=0;
            if(size1>size2)
            {
                while(1)
                {
                    res+=vow[j];
                    if(j==size1-1)
                    {
                        break;
                    }
                    res+=con[j];
                    j++;
                }
            }
            else if(size2>size1)
            {
                while(1)
                {
                    res+=con[j];
                    if(j==size2-1)
                    {
                        break;
                    }
                    res+=vow[j];
                    j++;
                }
            }
            else if(size1==size2)
            {
                if(vow[0]<con[0])
                {
                    while(1)
                    {
                        res+=vow[j];
                        res+=con[j];
                        if(j==size1-1)
                        {
                            break;
                        }
                        j++;
                    }
                }
                else 
                {
                    while(1)
                    {
                        res+=con[j];
                        res+=vow[j];
                        if(j==size1-1)
                        {
                            break;
                        }
                        j++;
                    }
                }
            }
            return res;
        }
        else
        {
            return "-1";
        }
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
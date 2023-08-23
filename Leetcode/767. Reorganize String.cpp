#include <bits/stdc++.h>
using namespace std;

    string reorganizeString(string s) {
        vector<int> freq(26,0);
        for(int i =0 ;i<s.length();i++){
            freq[s[i]-'a']+=1;
        }

        int maxfreq = 0, letter = 0;

        for (int i = 0 ;i<freq.size();i++){
            if (freq[i]>maxfreq){
                maxfreq = freq[i];
                letter=  i;
            }
        }

        if (maxfreq> (s.length()+1)/2) return "";

        vector<char> res(s.length(), ' ');
        int idx = 0;
        while (freq[letter]>0){
            res[idx] = letter + 97;
            idx+=2;
            freq[letter]-=1;
        }

        for(int i =0;i<26;i++){
            while (freq[i]>0){
                if (idx>=s.length()) idx=1;
                res[idx]  = i+97;
                idx+=2;
                freq[i]-=1;
            }
        }

        return string(res.begin(),res.end());        
    }

int main()
{
    string s = "aaab";
    reorganizeString(s);
    return 0;
}
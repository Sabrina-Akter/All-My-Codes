#include <bits/stdc++.h>
using namespace std;

    int maxConsecutiveAnswers(string answerKey, int k) {
        int L=0, R=0, mx=0, ans, temp_k=k;
        queue <int> T, F;
        //For True
        while(L<=R)
        {
            if(answerKey[R]=='F')
            {
                temp_k--;
                F.push(R);
            }
            if(temp_k==-1)
            {
                L = F.front()+1;
                F.pop();
                temp_k++;
            }
            ans = R-L+1;
            mx = max(mx, ans);
            if(R+1<answerKey.size())
            {
                R++;
            }
            else
            {
                break;
            }
        }
        L=0, R=0, temp_k=k;
        //For False
        while(L<=R)
        {
            if(answerKey[R]=='T')
            {
                temp_k--;
                T.push(R);
            }
            if(temp_k==-1)
            {
                L = T.front()+1;
                T.pop();
                temp_k++;
            }
            ans = R-L+1;
            mx = max(mx, ans);
            if(R+1<answerKey.size())
            {
                R++;
            }
            else
            {
                break;
            }
        }
        return mx;
    }

int main()
{
    string s = "TF";
    int k = 1;
    maxConsecutiveAnswers(s, k);

    return 0;
}
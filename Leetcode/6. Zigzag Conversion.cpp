#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
        if(numRows==1)
        {
            return s;
        }
        char c[numRows][1000];
        int i, j=0, k=0, row=1, col=-1, f=0, cnt1=0, cnt2=0;
        for(i=0;i<numRows;i++)
        {
            for(j=0;j<1000;j++)
            {
                c[i][j] = '*';
            }
        }
        j=0;
        for(i=0;i<s.size();i++)
        {
            if(j%2==0)
            {
                for(k=0;k<numRows;k++)
                {
                    if(i<s.size())
                    {
                        if(k==0)
                        {
                            row--;
                            col++;
                            c[row][col] = s[i];
                            cnt1++;
                        }
                        else
                        {
                            row++;
                            c[row][col] = s[i];
                            cnt1++;
                        }
                    }
                    cout << row << " " << col << endl;
                    i++;
                }
                j++;
                i--;
            }
            else
            {
                for(k=0;k<numRows-2;k++)
                {
                    if(i<s.size())
                    {
                        row--;
                        col++;
                        c[row][col] = s[i];
                        cnt1++;
                    }
                    cout << row << " " << col << endl;
                    i++;
                }
                j++;
                i--;
            }
        }
        string S;
        f=0;
        for(i=0;i<numRows;i++)
        {
            for(j=0;j<100;j++)
            {
                if(c[i][j]!='*')
                {
                    S.push_back(c[i][j]);
                    cnt2++;
                }
                if(cnt2==cnt1)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        cout << S << endl;
        return S;
    }

int main()
{
    string s = "wlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmcoqhnwnkuewhsqmgbbuqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsofsbcnuvqhffbsaqxwpqcacehchzvfrkmlnozjkpqpxrjxkitzyxacbhhkicqcoendtomfgdwdwfcgpxiqvkuytdlcgdewhtaciohordtqkvwcsgspqoqmsboaguwnnyqxnzlgdgwpbtrwblnsadeuguumoqcdrubetokyxhoachwdvmxxrdryxlmndqtukwagmlejuukwcibxubumenmeyatdrmydiajxloghiqfmzhl";
    int r = 80;

    convert(s, r);

    return 0;
}
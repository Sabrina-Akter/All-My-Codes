#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int i, left, right, mid1, mid2, cnt, mx1=1, mx2=0, L1=0, R1=0, L2=0, R2=0, L3=0, R3=0;
    //for odd
    for(i=0;i<s.size();i++)
    {
        left = i-1, right = i+1, cnt=1;
        char s_left, s_right;
        if(left<0)
        {
            s_left = '*';
            continue;
        }
        else
        {
            s_left = s[left];
        }
        if(right>=s.size())
        {
            s_right = ',';
            continue;
        }
        else
        {
            s_right = s[right];
        }
        while(s_left==s_right)
        {
            if(left<0)
            {
                break;
            }
            if(right>=s.size())
            {
                break;
            }
            cnt+=2;
            if(cnt>mx1)
            {
                L1 = left;
                R1 = right;
                mx1 = cnt;
            }
            left--;
            right++;
            if(left<0)
            {
                s_left = '*';
            }
            else
            {
                s_left = s[left];
            }
            if(right>=s.size())
            {
                s_right = ',';
            }
            else
            {
                s_right = s[right];
            }
        }
    }
    //for even
    for(i=0;i<s.size();i++)
    {
        mid1 = i, mid2 = i+1, left = mid1, right = mid2, cnt=0;
        char s_left, s_right;
        if(left<0)
        {
            s_left = '^';
            continue;
        }
        else
        {
            s_left = s[left];
        }
        if(right>=s.size() || mid2>=s.size())
        {
            s_right = '*';
            continue;
        }
        else
        {
            s_right = s[right];
        }
        while(s_left==s_right && s[mid1]==s[mid2])
        {
            if(left<0)
            {
                break;
            }
            if(right>=s.size())
            {
                break;
            }
            cnt+=2;
            if(cnt>mx2)
            {
                L2 = left;
                R2 = right;
                mx2 = cnt;
            }
            left--;
            right++;
            if(left<0)
            {
                s_left = '^';
            }
            else
            {
                s_left = s[left];
            }
            if(right>=s.size() || mid2>=s.size())
            {
                s_right = '*';
            }
            else
            {
                s_right = s[right];
            }
        }
    }
    //Ans
    if(mx1>mx2)
    {
        L3 = L1, R3 = R1;
    }
    else
    {
        L3 = L2, R3 = R2;
    }
    string ans="";
    for(i=L3;i<=R3;i++)
    {
        ans+=s[i];
    }
    cout << ans << endl;
    return ans;
    }

int main()
{
    string s = "kyyrjtdplseovzwjkykrjwhxquwxsfsorjiumvxjhjmgeueafubtonhlerrgsgohfosqssmizcuqryqomsipovhhodpfyudtusjhonlqabhxfahfcjqxyckycstcqwxvicwkjeuboerkmjshfgiglceycmycadpnvoeaurqatesivajoqdilynbcihnidbizwkuaoegmytopzdmvvoewvhebqzskseeubnretjgnmyjwwgcooytfojeuzcuyhsznbcaiqpwcyusyyywqmmvqzvvceylnuwcbxybhqpvjumzomnabrjgcfaabqmiotlfojnyuolostmtacbwmwlqdfkbfikusuqtupdwdrjwqmuudbcvtpieiwteqbeyfyqejglmxofdjksqmzeugwvuniaxdrunyunnqpbnfbgqemvamaxuhjbyzqmhalrprhnindrkbopwbwsjeqrmyqipnqvjqzpjalqyfvaavyhytetllzupxjwozdfpmjhjlrnitnjgapzrakcqahaqetwllaaiadalmxgvpawqpgecojxfvcgxsbrldktufdrogkogbltcezflyctklpqrjymqzyzmtlssnavzcquytcskcnjzzrytsvawkavzboncxlhqfiofuohehaygxidxsofhmhzygklliovnwqbwwiiyarxtoihvjkdrzqsnmhdtdlpckuayhtfyirnhkrhbrwkdymjrjklonyggqnxhfvtkqxoicakzsxmgczpwhpkzcntkcwhkdkxvfnjbvjjoumczjyvdgkfukfuldolqnauvoyhoheoqvpwoisniv";
    longestPalindrome(s);
    return 0;
}
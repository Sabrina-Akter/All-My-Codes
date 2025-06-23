class Solution 
{
    public:
    string minSum(vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        string s1, s2;
        for(int i = 0; i < arr.size(); i++)
        {
            if(i % 2 == 0) s1 += ('0' + arr[i]);
            else s2 += ('0' + arr[i]);
        }
        int l1 = s1.size() - 1, l2 = s2.size() - 1; 
        int carry = 0, num1, num2, sum;
        string ans;
        while(1)
        {
            if(l1 < 0 && l2 < 0) break;
            if(l1 < 0) num1 = 0;
            else
            {
                num1 = s1[l1] - '0';
                l1--;
            }
            if(l2 < 0) num2 = 0;
            else
            {
                num2 = s2[l2] - '0';
                l2--;
            }
            sum = carry + num1 + num2;
            carry = 0;
            if(sum >= 10)
            {
                sum = sum - 10;
                carry = 1;
            }
            ans += ('0' + sum);
        }
        if(carry == 1) ans += '1';
        int last = ans.size() - 1;
        while(1)
        {
                if(ans[last] == '0')
                {
                    ans.pop_back();
                    last--;
                }
                else break;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
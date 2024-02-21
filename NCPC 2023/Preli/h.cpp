#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

void f(ll (&arr)[5][7])
{
    cout << "|---------------------------|" << nl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << nl;
    cout << "|---------------------------|" << nl;
    for(ll i = 0; i < 5; i++)
    {
        cout << "|";
        for(ll j = 0; j < 7; j++)
        {
            if(arr[i][j] == 0)
            {
                cout << " - " << "|";
            }
            else if(arr[i][j] < 10) 
            {
                cout << "  " << arr[i][j] << "|";
            }
            else if(arr[i][j] > 9)
            {
                cout << " " << arr[i][j] << "|";
            }

        }
        cout << nl;
        cout << "|---------------------------|" << nl;
    }
    cout << nl;
}

int starting_day_of_month(int day, int month, int year) 
{
    if (month < 3) {
        month += 12;
        year--;
    }
    int q = day;
    int m = month;
    int K = year % 100;
    int J = year / 100;
    int f = q + ((13 * (m + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J);
    int day_of_week = f % 7;

    if (day_of_week == 0) {
        return 6; // Sunday
    } else {
        return day_of_week - 1;
    }
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll ar[5][7];
        ll day, month, year, cnt2 = 0;
        string s1, s2, temp;
        cin >> s1 >> s2;
        s1 += '/';
        for(ll i = 0; i < s1.size(); i++)
        {
            if(s1[i] == '/')
            {
                if(cnt2 == 0)
                {
                    day = stoi(temp);
                    cnt2++;
                }
                else if(cnt2 == 1)
                {
                    month = stoi(temp);
                    cnt2++;
                }               
                else if(cnt2 == 2)
                {
                    year = stoi(temp);
                    cnt2++;
                }
                temp = "";                 
            }
            else
            {
                temp += s1[i];
            }
        }
        map <string, int> mp1 = {{"Sun", 0}, {"Mon", 1}, {"Tue", 2}, {"Wed", 3}, {"Thu", 4}, {"Fri", 5}, {"Sat", 6}};
        map <int, int> mp2 = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};        
        ll till = mp2[month], cnt = 1;
        if(month == 2)
        {
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) till = 29;
        }
        bool found = false;
        if(day == 30 || day == 31)
        {
            if(day == 30 && s2 == "Sun")
            {
                day = 29;
                s2 = "Sat";
            }
            else if(day == 31 && s2 == "Sun")
            {
                day = 30;
                s2 = "Sat";
            }
            else if(day == 31 && s2 == "Mon")
            {
                day = 29;
                s2 = "Sat";
            }
        }
        for(ll i = 0; i < 7; i++)
        {
            memset(ar, 0, sizeof(ar));
            bool done = false;
            cnt = 1;
            for(ll j = 0; j < 5; j++)
            {
                for(ll k = 0; k < 7; k++)
                {
                    if(j == 0 && k == i)
                    {
                        done = true;
                    }
                    if(done == true)
                    {
                        ar[j][k] = cnt;
                        if(cnt == day && mp1[s2] == k) found = true;
                        cnt++;
                    }
                    if(cnt > till) break;
                }
            }
            if(found == true)
            {
                cnt--;
                if(till - cnt == 1)
                {
                    ar[0][0] = cnt + 1;
                }
                else if(till - cnt == 2)
                {
                    ar[0][0] = cnt + 1;
                    ar[0][1] = cnt + 2;
                }
                f(ar);
                break;
            }
        }    
    }
    return 0;
}
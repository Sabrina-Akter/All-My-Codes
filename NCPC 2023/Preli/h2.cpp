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
const char nl = '\n';

ll to_int(string str) 
{
    int result = 0;
    
    for (char c : str) 
    {
        if (c >= '0' && c <= '9') 
        {
            result = result * 10 + (c - '0');
        } else 
        {
            break;
        }
    }  
    return result;
}

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

// Function to check if a year is a leap year
bool isLeapYear(int year) {
  if (year < 1582) {
    // Use Julian calendar rules for years before 1582
    return (year % 4 == 0);
  } else {
    // Use Gregorian calendar rules for years from 1582 onwards
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
  }
}

// Function to find the first day of the month
int firstDayOfMonth(int year, int month) {
  // Initialize an array with starting days of each month (non-leap year)
  const int daysStart[12] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

  // Adjust for leap years and January/February
  int adjust = (isLeapYear(year) && month > 2) ? 1 : 0;

  // Calculate the total number of days since October 5th, 1582 (Gregorian calendar start)
  int days = 0;
  if (year < 1582) {
    // Use Julian calendar rules for years before 1582
    days = 365 * (year - 1000) + (year - 1000) / 4;
  } else {
    // Use Gregorian calendar rules for years from 1582 onwards
    days = 365 * (year - 1582) + (year - 1582) / 4 - (year - 1582) / 100 + (year - 1582) / 400;
  }
  days += daysStart[(month - 1) % 12] + adjust;

  // Convert the count to the day of the week (0 = Sunday, 6 = Saturday)
  return (days % 7);
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
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
                    day = to_int(temp);
                    cnt2++;
                }
                else if(cnt2 == 1)
                {
                    month = to_int(temp);
                    cnt2++;
                }               
                else if(cnt2 == 2)
                {
                    year = to_int(temp);
                    cnt2++;
                }
                temp = "";                 
            }
            else
            {
                temp += s1[i];
            }
        }
        int dayOfWeek = firstDayOfMonth(year, month);
        //cout << "The 1st day of " << month << "/" << year << " is a " << weekdays[dayOfWeek] << " " << dayOfWeek << nl;
        ll ar[5][7];
        memset(ar, 0, sizeof(ar));
        bool start = false;
        map <int, int> mp2 = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};        
        ll till = mp2[month], cnt = 1;
        if(month == 2)
        {
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) till = 29;
        }
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 7; j++)
            {
                if(i == 0 && j == dayOfWeek)
                {
                    start = true;
                }
                if(start == true)
                {
                    ar[i][j] = cnt;
                    cnt++;
                }
                if(cnt > till)
                {
                    break;
                }
            }
        }
        cnt--;
        if(cnt != till)
        {
            for(int i = 0; i < 7; i++)
            {
                cnt++;
                if(cnt > till)
                {
                    break;
                }
                ar[0][i] = cnt;
            }
        }
        f(ar);
    }
}
#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back
const char nl = '\n';

int main()
{
    fastt;
    string s;
    bool m1, m2, l1, l2, d1, d2;
    vector <string> M1, M2, L1, L2, D1, D2;
    //Enter Medicine Name (with mg):
    //HOW TO END: type "done"
    while (true)
    {
        getline(cin, s);
        if (s == "done")
        {
            if (!M1.empty())
            {
                cout << "MORNING (EMPTY STOMACH): " << nl;
                for (int i = 0; i < M1.size(); i++)
                {
                    cout << i+1 << ". " << M1[i] << nl;
                }
                cout << "_______________________" << nl;
                cout << nl;
            }
            if (!M2.empty())
            {
                cout << "MORNING (AFTER BREAKFAST): " << nl; // Fixed typo
                for (int i = 0; i < M2.size(); i++)
                {
                    cout << i+1 << ". " << M2[i] << nl;
                }
                cout << "_______________________" << nl;
                cout << nl;
            }
            if (!L1.empty())
            {
                cout << "BEFORE LUNCH: " << nl;
                for (int i = 0; i < L1.size(); i++)
                {
                    cout << i+1 << ". " << L1[i] << nl;
                }
                cout << "_______________________" << nl;
                cout << nl;
            }
            if (!L2.empty())
            {
                cout << "AFTER LUNCH: " << nl;
                for (int i = 0; i < L2.size(); i++)
                {
                    cout << i+1 << ". " << L2[i] << nl;
                }
                cout << "_______________________" << nl;
                cout << nl;
            }
            if (!D1.empty())
            {
                cout << "BEFORE DINNER: " << nl;
                for (int i = 0; i < D1.size(); i++)
                {
                    cout << i+1 << ". " << D1[i] << nl;
                }
                cout << "_______________________" << nl;
                cout << nl;
            }
            if (!D2.empty())
            {
                cout << "AFTER DINNER: " << nl;
                for (int i = 0; i < D2.size(); i++)
                {
                    cout << i+1 << ". " << D2[i] << nl;
                }
                cout << "_______________________" << nl;
                cout << nl;
            }
            break;
        }
        //Morning (Empty Stomach)?
        cin >> m1;
        //Morning (After Breakfast)?
        cin >> m2;
        //Lunch (Before Lunch)?
        cin >> l1;
        //Lunch (After Lunch)?
        cin >> l2;
        //Dinner (Before Dinner)?
        cin >> d1;
        //Dinner (After Dinner)?
        cin >> d2;

        // Store
        if(m1) M1.push_back(s);
        if(m2) M2.push_back(s);
        if(l1) L1.push_back(s);
        if(l2) L2.push_back(s);
        if(d1) D1.push_back(s);
        if(d2) D2.push_back(s);

        // FIX: Flush input buffer for next getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return 0;
}

/*ID-C191249*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, top=-1;
    vector <int> v;
    while(1)
    {
        cout << "\tSelect your choice:(press 1-3)\n\n";
        cout << "\t\t1: Push\n\t\t2: Pop\n\t\t3: Exit\n\n";
        cout << "\tYour choice: ";
        cin >> n;
        if(n==1)
        {
            cout << "\nPush an integer: ";
            cin >> x;
            top++;
            v.push_back(x);
            cout << "\n";
        }
        else if(n==2)
        {
            if(top==-1)
            {
                cout << "\nNo data available.\n\n";
                continue;
            }
            else
            {
                cout << "\nPop is: " << v[top] <<"\n\n";
                v.erase(v.begin()+(top), v.begin()+(top+1));
            }
            top--;
        }
        else if(n==3)
        {
            cout << "\nYou have exited.\n";
            break;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, a, b, i, count=0, x, y, z, f1, f2, flag=0, N;
    cin >> n;
    cin >> a;
    queue <int> q1;
    for(i=0;i<a;i++)
    {
        cin >> N;
        q1.push(N);
        if(i==0)
        {
            f1 = N;
        }
    }
    cin >> b;
    queue <int> q2;
    for(i=0;i<b;i++)
    {
        cin >> N;
        q2.push(N);
        if(i==0)
        {
            f2 = N;
        }
    }
    while(1)
    {
        if(q1.front()>q2.front())
        {
            x = q2.front();
            y = q1.front();
            q1.pop();
            q2.pop();
            q1.push(x);
            q1.push(y);
            count++;
        }
        else if(q2.front()>q1.front())
        {
            x = q1.front();
            y = q2.front();
            q1.pop();
            q2.pop();
            q2.push(x);
            q2.push(y);
            count++;
        }
        if(q1.size()==0 || q2.size()==0)
        {
            if(q1.size()!=0)
            {
                z = 1;
            }
            else
            {
                z = 2;
            }
            break;
        }
        if(count==2 && f1==q1.front() && f2==q2.front())
        {
            flag = 1;
            cout << "-1" << endl;
            break;
        }
        if(count>1000)
        {
            flag = 1;
            cout << "-1" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << count << " " << z << endl;
    }
    return 0;
}

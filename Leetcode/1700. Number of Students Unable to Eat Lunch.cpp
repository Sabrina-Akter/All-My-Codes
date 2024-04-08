#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) 
{
    int n = students.size();
    queue <int> Q;
    for(auto &it : students)
    {
        Q.push(it);
    }
    for(int i = 0; i < n; i++)
    {
        int x = 0;
        bool found = false;
        while(1)
        {
            x++;
            int temp = Q.front();
            Q.pop();
            if(temp != sandwiches[i])
            {
                Q.push(temp);
            }
            else
            {
                found = true;
                break;
            }
            if(x == n) break;
        }
        if(found == false)
        {
            return n - i;
        }
    }
    return 0;
}

int main()
{
    

    return 0;
}
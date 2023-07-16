#include <bits/stdc++.h>
using namespace std;

    int mn = INT_MAX;
    vector <int> final;

    void f(map <string, int>& jobs, vector<vector<string>>& people, vector <int>& ans, map <string, int>& m, int ind, int total_people)
    {
        if(ind==people.size()-1)
        {
            if(m.size()==jobs.size())
            {
                int f=0, cnt=0;
                for(auto it=m.begin();it!=m.end();it++)
                {
                    string x = it->first;
                    if(jobs[x]>0 && m[x]>0)
                    {
                        cnt++;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0 && cnt==jobs.size())
                {
                    if(total_people<mn)
                    {
                        mn = total_people;
                        final = ans;
                    }
                }
            }
        }
        else
        {
            f(jobs, people, ans, m, ind+1, total_people); 
            if(people[ind+1].size()!=0)
            {
                ans.push_back(ind+1);
                for(int i=0;i<people[ind+1].size();i++)
                {
                    m[people[ind+1][i]]++;
                }
                f(jobs, people, ans, m, ind+1, total_people+1);
                ans.pop_back();
                for(int i=0;i<people[ind+1].size();i++)
                {
                    m[people[ind+1][i]]--;
                }
            }
        }
    }


    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        int i, total_jobs = req_skills.size();
        map <string, int> jobs;
        for(i=0;i<total_jobs;i++)
        {
            jobs[req_skills[i]] = 1;
        }
        map <string, int> m;
        vector <int> ans;
        f(jobs, people, ans, m, -1, 0);
        return final;
    }

int main()
{
    vector<string> req_skills = {"mmcmnwacnhhdd","vza","mrxyc"};
    vector<vector<string>> people = {{"mmcmnwacnhhdd"},{},{},{"vza","mrxyc"}};
    smallestSufficientTeam(req_skills, people);
    return 0;
}
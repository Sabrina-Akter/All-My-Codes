#include <bits/stdc++.h>
using namespace std;

double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) 
{
    auto comp = [](const pair<double, pair<double, double>>& a, 
                    const pair<double, pair<double, double>>& b) {
        double gainA = (a.second.first + 1) / (a.second.second + 1) - a.second.first / a.second.second;
        double gainB = (b.second.first + 1) / (b.second.second + 1) - b.second.first / b.second.second;
        return gainA < gainB;
    };
    
    priority_queue<pair<double, pair<double, double>>, 
                    vector<pair<double, pair<double, double>>>, 
                    decltype(comp)> pq(comp);
    
    for(const auto& cls : classes)
    {
        double pass = cls[0];
        double total = cls[1];
        double avg = pass / total;
        pq.push({avg, {pass, total}});
    }
    
    while(extraStudents--)
    {
        auto top = pq.top();
        pq.pop();
        
        double newPass = top.second.first + 1;
        double newTotal = top.second.second + 1;
        double newAvg = newPass / newTotal;
        
        pq.push({newAvg, {newPass, newTotal}});
    }
    
    double sum = 0;
    while(!pq.empty())
    {
        sum += pq.top().first;
        pq.pop();
    }
    
    return sum / classes.size();
}

int main()
{
    

    return 0;
}
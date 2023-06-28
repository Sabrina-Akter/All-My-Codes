#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, burst_time[20], waiting_time[20], turn_around_time[20], prio[20], i, j;
    double average_waiting_time=0, average_turn_around_time=0;
    vector <pair<int, int> > p, p2;
    cout << "Enter total number of processes: ";
    cin >> n;

    cout << "\nEnter the Priority and Process Burst Time\n";


    for(i=0;i<n;i++)
    {
        cout << "P[" << i+1 << "]: ";
        cin >> prio[i];
        cin >> burst_time[i];
        p.push_back({prio[i], i+1});
        p2.push_back({prio[i], burst_time[i]});
    }
    sort(p.begin(), p.end());
    sort(p2.begin(), p2.end());
    sort(prio, prio+n);
  
    waiting_time[0]=0;

    for(i=1;i<n;i++)
    {
        waiting_time[i]=p2[i-1].second+waiting_time[i-1];
    }

    cout << "\nProcess" << "\t" << "Burst_Time[p]" << "\t" << "Waiting_Time" << "\t" << "Turn_Around_Time\n";

    for(i=0;i<n;i++)
    {
        turn_around_time[i]=p2[i].second+waiting_time[i];
        average_waiting_time+=waiting_time[i];
        average_turn_around_time+=turn_around_time[i];
        cout << "P[" << (p[i].second) << "]" << "\t" << p2[i].second << "\t\t" << waiting_time[i] << "\t\t" << turn_around_time[i] << "\n";
    }

    average_waiting_time/=i;
    average_turn_around_time/=i;
    cout << "\nAverage Waiting Time: " << average_waiting_time;
    cout << "\nAverage Turnaround Time: " << average_turn_around_time << "\n";

    return 0;
}
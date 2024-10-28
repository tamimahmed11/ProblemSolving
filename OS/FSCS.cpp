#include<bits/stdc++.h>
using namespace std;

struct Process 
{
    int pid;    
    int bt;     
    int at;    
    int wt;   
    int tat;    
};
bool comparison(Process a, Process b) {
    if(a.at == b.at)
        return a.bt < b.bt;
    return a.at < b.at;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    Process proc[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter Arrival Time and Burst Time for Process " << i+1 << ": ";
        cin >> proc[i].at >> proc[i].bt;
        proc[i].pid = i+1;
    }

    // Sort processes by Arrival Time (and Burst Time if arrival time is the same)
    sort(proc, proc + n, comparison);

    int total_wt = 0, total_tat = 0;
    int current_time = 0;

    cout << "\nProcess\tAT\tBT\tWT\tTAT\n";
    
    for (int i = 0; i < n; i++) {
        if (current_time < proc[i].at) {
            current_time = proc[i].at;  // CPU idle until the next process arrives
        }

        proc[i].wt = current_time - proc[i].at;  // Waiting time
        proc[i].tat = proc[i].wt + proc[i].bt;   // Turn around time
        total_wt += proc[i].wt;
        total_tat += proc[i].tat;

        cout << "P" << proc[i].pid << "\t" << proc[i].at << "\t" << proc[i].bt << "\t" 
             << proc[i].wt << "\t" << proc[i].tat << "\n";

        current_time += proc[i].bt;  // Update the current time
    }

    cout << "\nAverage Waiting Time: " << (float)total_wt / n;
    cout << "\nAverage Turn Around Time: " << (float)total_tat / n;

    return 0;
}


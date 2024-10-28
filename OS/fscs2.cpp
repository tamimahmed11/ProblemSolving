#include<bits/stdc++.h>
using namespace std;

struct Process {
    int id;         // Process ID
    int at;         // Arrival Time
    int bt;         // Burst Time
    int ct;         // Completion Time
    int wt;         // Waiting Time
    int tat;        // Turnaround Time
};

// Comparison function to sort processes by arrival time
bool compareArrival(Process p1, Process p2) {
    return p1.at < p2.at;
}

int main() {
    int n;

    // Input number of processes
    cout << "Enter the number of processes: ";
    cin >> n;

    // Create a map of processes
    map<int, Process> processMap;
    
    vector<Process> processList(n);

    // Input Arrival Time and Burst Time for each process
    for (int i = 0; i < n; i++) {
        Process p;
        p.id = i + 1;
        cout << "Enter Arrival Time and Burst Time for Process " << p.id << ": ";
        cin >> p.at >> p.bt;
        processMap[p.id] = p;
        processList[i] = p;
    }
    
    // Sort processes by arrival time
    sort(processList.begin(), processList.end(), compareArrival);

    // Calculate Completion Time, Turnaround Time, Waiting Time
    int currentTime = 0;
    for (int i = 0; i < n; i++) {
        Process &p = processList[i];
        
        if (currentTime < p.at) {
            currentTime = p.at;  // CPU idle time handling (if any process arrives later)
        }
        
        p.ct = currentTime + p.bt; // Completion time is current time + burst time
        p.tat = p.ct - p.at;       // Turnaround time is completion time - arrival time
        p.wt = p.tat - p.bt;       // Waiting time is turnaround time - burst time
        currentTime = p.ct;        // Update current time to the completion time
        
        // Update process in the map
        processMap[p.id] = p;
    }

    // Calculate total waiting time and turnaround time for averages
    float total_wt = 0, total_tat = 0;
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        Process p = processList[i];
        cout << "P" << p.id << "\t" << p.at << "\t" << p.bt << "\t" << p.ct << "\t" << p.tat << "\t" << p.wt << endl;
        total_wt += p.wt;
        total_tat += p.tat;
    }
    
    // Display average WT and TAT
    cout << "\nAverage Waiting Time: " << total_wt / n << endl;
    cout << "Average Turnaround Time: " << total_tat / n << endl;

    return 0;
}

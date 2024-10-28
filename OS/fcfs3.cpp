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

// Function to sort processes by Arrival Time
void sortProcessesByArrival(vector<Process>& processes) {
    sort(processes.begin(), processes.end(), [](const Process& p1, const Process& p2) {
        return p1.at < p2.at;
    });
}

int main() {
    int n;

    // Input number of processes
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    // Input Arrival Time and Burst Time for each process
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1; // Process ID starts from 1
        cout << "Enter Arrival Time and Burst Time for Process " << processes[i].id << ": ";
        cin >> processes[i].at >> processes[i].bt;
    }

    // Sort processes by Arrival Time
    sortProcessesByArrival(processes);

    // Calculate Completion Time, Turnaround Time, and Waiting Time
    int currentTime = 0;
    float total_wt = 0, total_tat = 0;

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto& p : processes) {
        if (currentTime < p.at) {
            currentTime = p.at;  // CPU idle time handling
        }
        
        // Calculate Completion Time
        int ct = currentTime + p.bt;
        // Calculate Turnaround Time
        int tat = ct - p.at;
        // Calculate Waiting Time
        int wt = tat - p.bt;

        // Update current time
        currentTime = ct;

        // Print process details
        cout << "P" << p.id << "\t" << p.at << "\t" << p.bt << "\t" 
             << ct << "\t" << tat << "\t" << wt << endl;

        // Update totals for averages
        total_wt += wt;
        total_tat += tat;
    }
    
    // Display average WT and TAT
    cout << fixed << setprecision(2); // Set precision for average output
    cout << "\nAverage Waiting Time: " << total_wt / n << endl;
    cout << "Average Turnaround Time: " << total_tat / n << endl;

    return 0;
}

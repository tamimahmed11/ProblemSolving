#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int pid;    // Process ID
    int at;     // Arrival Time
    int bt;     // Burst Time
    int wt;     // Waiting Time
    int tat;    // Turnaround Time
    int rt;     // Response Time
};

// Function to compare two processes according to their arrival time
bool compareArrival(Process a, Process b) {
    return a.at < b.at;
}

// Function to compare two processes according to their burst time
bool compareBurst(Process a, Process b) {
    return a.bt < b.bt;
}

// Function to find waiting time, turnaround time, and response time for SJF (Non-Preemptive)
void findTimes(Process proc[], int n) {
    sort(proc, proc + n, compareArrival); // Sorting based on arrival time
    int currentTime = 0;
    bool visited[n] = {false}; // Mark all processes as not visited

    for (int i = 0; i < n; i++) {
        // Find the process with the smallest burst time that has arrived
        int minIndex = -1;
        for (int j = 0; j < n; j++) {
            if (proc[j].at <= currentTime && !visited[j]) {
                if (minIndex == -1 || proc[j].bt < proc[minIndex].bt) {
                    minIndex = j;
                }
            }
        }
        
        if (minIndex == -1) {
            currentTime++;
            i--; // No process is available yet, increment time and try again
            continue;
        }

        visited[minIndex] = true;

        // Calculating waiting time, turnaround time, and response time
        proc[minIndex].rt = currentTime - proc[minIndex].at; // Response time
        proc[minIndex].wt = proc[minIndex].rt;               // Waiting time
        currentTime += proc[minIndex].bt;                    // Update current time after executing this process
        proc[minIndex].tat = currentTime - proc[minIndex].at;// Turnaround time
    }
}

// Function to calculate the average waiting time and turnaround time
void findAvgTimes(Process proc[], int n) {
    findTimes(proc, n); // Get the times first

    int totalWT = 0, totalTAT = 0;

    cout << "\nPID\tAT\tBT\tWT\tTAT\tRT\n";
    for (int i = 0; i < n; i++) {
        totalWT += proc[i].wt;
        totalTAT += proc[i].tat;

        cout << proc[i].pid << "\t" << proc[i].at << "\t" << proc[i].bt
             << "\t" << proc[i].wt << "\t" << proc[i].tat << "\t" << proc[i].rt << endl;
    }

    cout << "\nAverage Waiting Time: " << (float)totalWT / n;
    cout << "\nAverage Turnaround Time: " << (float)totalTAT / n << endl;
}

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    Process proc[n];
    cout << "Enter Arrival Time and Burst Time for each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << ": ";
        proc[i].pid = i + 1;
        cin >> proc[i].at >> proc[i].bt;
    }

    findAvgTimes(proc, n);

    return 0;
}

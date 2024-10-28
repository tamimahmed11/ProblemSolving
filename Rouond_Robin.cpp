#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;

struct Process {
    int pid; // Process ID
    int at;  // Arrival Time
    int bt;  // Burst Time
    int ct;  // Completion Time
    int tat; // Turnaround Time
    int wt;  // Waiting Time
    int rt;  // Response Time
    int remaining_bt; // Remaining Burst Time
};

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;
    cout << "Enter time quantum: ";
    cin >> quantum;

    vector<Process> processes(n);
    queue<int> readyQueue;

    // Input Process Details
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        cout << "Enter arrival time and burst time for process " << processes[i].pid << ": ";
        cin >> processes[i].at >> processes[i].bt;
        processes[i].remaining_bt = processes[i].bt;
    }

    int current_time = 0, completed = 0;
    float total_tat = 0, total_wt = 0, total_rt = 0;
    vector<bool> is_in_queue(n, false);
    vector<bool> is_response_calculated(n, false);

    // Round Robin Scheduling
    while (completed != n) {
        bool process_executed = false;

        // Add processes to the ready queue that have arrived
        for (int i = 0; i < n; i++) {
            if (processes[i].at <= current_time && !is_in_queue[i] && processes[i].remaining_bt > 0) {
                readyQueue.push(i);
                is_in_queue[i] = true;
            }
        }

        if (!readyQueue.empty()) {
            int index = readyQueue.front();
            readyQueue.pop();

            // Response time is calculated only the first time a process gets the CPU
            if (!is_response_calculated[index]) {
                processes[index].rt = current_time - processes[index].at;
                total_rt += processes[index].rt;
                is_response_calculated[index] = true;
            }

            // Execute the process for either quantum time or remaining time
            int execution_time = min(quantum, processes[index].remaining_bt);
            processes[index].remaining_bt -= execution_time;
            current_time += execution_time;

            // Add processes that arrived during the execution to the ready queue
            for (int i = 0; i < n; i++) {
                if (processes[i].at <= current_time && !is_in_queue[i] && processes[i].remaining_bt > 0) {
                    readyQueue.push(i);
                    is_in_queue[i] = true;
                }
            }

            // If process is not finished, add it back to the ready queue
            if (processes[index].remaining_bt > 0) {
                readyQueue.push(index);
            } else {
                // Process completed
                processes[index].ct = current_time;
                processes[index].tat = processes[index].ct - processes[index].at;
                processes[index].wt = processes[index].tat - processes[index].bt;
                total_tat += processes[index].tat;
                total_wt += processes[index].wt;
                completed++;
            }

            process_executed = true;
            is_in_queue[index] = false; // Remove from queue flag
        }

        // If no process is executed, increment time
        if (!process_executed) {
            current_time++;
        }
    }

    // Output the results
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\tRT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << processes[i].pid << "\t"
             << processes[i].at << "\t"
             << processes[i].bt << "\t"
             << processes[i].ct << "\t"
             << processes[i].tat << "\t"
             << processes[i].wt << "\t"
             << processes[i].rt << "\n";
    }

    // Calculate and display averages
    cout << fixed << setprecision(2);
    cout << "\nAverage Turnaround Time: " << total_tat / n << endl;
    cout << "Average Waiting Time: " << total_wt / n << endl;
    cout << "Average Response Time: " << total_rt / n << endl;

    return 0;
}

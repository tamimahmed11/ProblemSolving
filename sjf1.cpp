#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

// Comparator to sort processes by arrival time
bool compareArrival(const Process& a, const Process& b) {
    return a.arrival_time < b.arrival_time;
}

// Comparator to sort processes by burst time
bool compareBurst(const Process& a, const Process& b) {
    return a.burst_time < b.burst_time;
}

void calculateSJF(vector<Process>& processes) {
    int n = processes.size();
    int current_time = 0;
    vector<bool> completed(n, false); // Track completed processes
    int completed_count = 0;

    while (completed_count < n) {
        vector<Process> ready_queue;

        // Populate the ready queue with processes that have arrived and are not completed
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && !completed[i]) {
                ready_queue.push_back(processes[i]);
            }
        }

        if (ready_queue.empty()) {
            // If no processes are ready, move to the next time unit
            current_time++;
            continue;
        }

        // Sort the ready queue by burst time
        sort(ready_queue.begin(), ready_queue.end(), compareBurst);

        // Pick the process with the shortest burst time
        Process current_process = ready_queue[0];
        int index = -1;

        // Find the index of the current process in the original process list
        for (int i = 0; i < n; i++) {
            if (processes[i].id == current_process.id) {
                index = i;
                break;
            }
        }

        // Update process metrics
        processes[index].completion_time = current_time + current_process.burst_time;
        processes[index].turnaround_time = processes[index].completion_time - processes[index].arrival_time;
        processes[index].waiting_time = processes[index].turnaround_time - processes[index].burst_time;

        // Mark process as completed
        completed[index] = true;
        completed_count++;

        // Update current time
        current_time = processes[index].completion_time;
    }
}

void printResults(const vector<Process>& processes) {
    float total_waiting_time = 0;
    float total_turnaround_time = 0;
    int n = processes.size();

    cout << "Process ID\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto& process : processes) {
        total_waiting_time += process.waiting_time;
        total_turnaround_time += process.turnaround_time;
        cout << process.id << "\t\t"
             << process.arrival_time << "\t"
             << process.burst_time << "\t"
             << process.completion_time << "\t"
             << process.turnaround_time << "\t"
             << process.waiting_time << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "Average Waiting Time: " << (total_waiting_time / n) << "\n";
    cout << "Average Turnaround Time: " << (total_turnaround_time / n) << "\n";
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1; // Process IDs starting from 1
        cout << "Enter arrival time and burst time for Process " << i + 1 << ": ";
        cin >> processes[i].arrival_time >> processes[i].burst_time;
        processes[i].completion_time = 0; // Initialize CT to 0
    }

    // Sort processes by arrival time before scheduling
    sort(processes.begin(), processes.end(), compareArrival);
    
    calculateSJF(processes);
    printResults(processes);

    return 0;
}

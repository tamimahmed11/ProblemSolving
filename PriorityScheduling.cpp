
#include<stdio.h>
using namespace std;
struct Process 
{
    int pid;
    int burstTime;      
    int priority;
    int waitingTime;
    int turnaroundTime;
};
// Function to sort processes based on priority (higher priority first)
bool comparePriority(Process a, Process b) 
{
    return a.priority > b.priority;
}
void calculateTimes(vector<Process>& processes) 
{
    int n = processes.size();
    int totalWaitingTime = 0, totalTurnaroundTime = 0;
    // First process waiting time is 0
    processes[0].waitingTime = 0;
    // Calculate waiting time
    for (int i = 1; i < n; i++) {
        processes[i].waitingTime = processes[i-1].waitingTime + processes[i-1].burstTime;
    }
    // Calculate turnaround time
    for (int i = 0; i < n; i++) {
        processes[i].turnaroundTime = processes[i].waitingTime + processes[i].burstTime;
    }
    // Calculate total waiting and turnaround time
    for (int i = 0; i < n; i++) 
    {
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }
    cout << "\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) 
    {
        cout << processes[i].pid << "\t\t" << processes[i].burstTime << "\t\t" << processes[i].priority
             << "\t\t" << processes[i].waitingTime << "\t\t" << processes[i].turnaroundTime << "\n";
    }
    cout << "\nAverage Waiting Time: " << (float)totalWaitingTime / n;
    cout << "\nAverage Turnaround Time: " << (float)totalTurnaroundTime / n << "\n";
}
int main() 
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;
    vector<Process> processes(n);
    for (int i = 0; i < n; i++) 
    {
        processes[i].pid = i + 1;
        cout << "Enter burst time for process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
        cout << "Enter priority for process " << i + 1 << ": ";
        cin >> processes[i].priority;
    }
    sort(processes.begin(), processes.end(), comparePriority);
    calculateTimes(processes);

    return 0;
}

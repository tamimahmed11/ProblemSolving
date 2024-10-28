#include <iostream>
using namespace std;

int pid[20], BT[20], WT[20], TAT[20], n;

void calculate_waiting_time() {
    WT[0] = 0; // First process has no waiting time
    for (int i = 1; i < n; i++) {
        WT[i] = WT[i-1] + BT[i-1]; // Waiting time is the cumulative burst time of previous processes
    }
}

void calculate_TAT_time() {
    for (int i = 0; i < n; i++) {
        TAT[i] = WT[i] + BT[i]; // Turnaround time is waiting time + burst time
    }
}

int main() {
    cout << "Enter the Number of processes: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        pid[i] = i;
        cout << "Enter the burst time for process " << i << ": ";
        cin >> BT[i];
    }
    
    calculate_waiting_time();
    calculate_TAT_time();
    
    cout << "\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t\t" << BT[i] << "\t\t" << WT[i] << "\t\t" << TAT[i] << "\n";
    }

    return 0;
}

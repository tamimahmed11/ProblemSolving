#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Process {
    int id, at, bt, ct, tat, wt, remaining_bt;
};

void calculateTimes(vector<Process>& processes, int tq) {
    queue<int> q;
    int time = 0;
    int n = processes.size();
    int completed = 0;

    // Load processes with arrival times into the queue
    for (int i = 0; i < n; ++i)
        processes[i].remaining_bt = processes[i].bt;

    while (completed < n) {
        bool all_idle = true;

        for (int i = 0; i < n; ++i) {
            if (processes[i].remaining_bt > 0 && processes[i].at <= time) {
                all_idle = false;
                q.push(i);

                if (q.front() == i) {
                    q.pop();
                    int exec_time = min(tq, processes[i].remaining_bt);
                    time += exec_time;
                    processes[i].remaining_bt -= exec_time;

                    if (processes[i].remaining_bt == 0) {
                        completed++;
                        processes[i].ct = time;
                        processes[i].tat = processes[i].ct - processes[i].at;
                        processes[i].wt = processes[i].tat - processes[i].bt;
                    }
                    else {
                        q.push(i);
                    }
                }
            }
        }

        if (all_idle) time++;
    }
}

int main() {
    int n, tq;
    cout << "Enter the number of processes: ";
    cin >> n;
    cout << "Enter time quantum: ";
    cin >> tq;

    vector<Process> processes(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].at >> processes[i].bt;
        processes[i].id = i + 1;
    }

    calculateTimes(processes, tq);

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto& p : processes) {
        cout << "P" << p.id << "\t" << p.at << "\t" << p.bt << "\t" 
             << p.ct << "\t" << p.tat << "\t" << p.wt << endl;
    }

    return 0;
}

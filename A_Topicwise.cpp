#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
    vector<pair<int, int>> bebodhi(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> bebodhi[i].first >>bebodhi[i].second;
    }
    int Power = 0;
    for (int i = 0; i < n; i++) 
    {
      
        int Time = bebodhi[i].second - bebodhi[i].first;
        Power =Power+Time* P1;
        if (i < n - 1) 
        {
            int idleTime = bebodhi[i + 1].first - bebodhi[i].second;
            if (idleTime <= T1) 
            {
                Power+= idleTime * P1;
            } 
            else if (idleTime <= T1 + T2) 
            {
                Power += T1 * P1 + (idleTime - T1) * P2;
            } 
            else 
            {
                Power += T1 * P1 + T2 * P2 + (idleTime - T1 - T2) * P3;
            }
        }
    }
    cout <<Power << endl;

    return 0;
}

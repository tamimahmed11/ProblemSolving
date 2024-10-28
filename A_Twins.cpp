#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int>tk(n);
    int total = 0;

 
    for (int i = 0; i < n; i++) {
        cin >>tk[i];
        total=total+tk[i];
    }

 
    sort(tk.rbegin(),tk.rend());

    int sum= 0;
    int cnt = 0;

  
    for (int i = 0; i < n; i++) 
    {
        sum=sum+tk[i];
        cnt++;
        if (sum> total-sum) 
        {
            break;
        }
    }

    cout <<cnt<< endl;

    return 0;
}

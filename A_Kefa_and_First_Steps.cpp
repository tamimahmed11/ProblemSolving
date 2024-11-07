#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> a(n);
    
   
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ML= 1; 
    int CL= 1;

    for (int i = 1; i < n; ++i) 
    {
        if (a[i] >= a[i - 1])
         {
            CL++; 
        } 
        else 
        {
            ML = max(ML, CL);
            CL= 1; 
        }
    }
       ML= max(ML,CL);
    cout <<ML<< endl;
    return 0;
}

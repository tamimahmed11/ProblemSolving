#include<bits/stdc++.h>
using namespace std;

int tamim(int n) {
    int cnt = 0;
    
    while (n > 1) 
    {
        if (n % 6 == 0) 
        {
            n =n/6;
        }
         else if (n % 3 == 0) 
        {
            n =n*2;
        } 
        else 
        {
            return -1;
        }
        cnt++;
    }
    return cnt;
}

int main() 
{
    int test;
    cin >> test;
    while (test--) 
    {
        int n;
        cin >> n;
        cout <<tamim(n) << endl;
    }
    return 0;
}

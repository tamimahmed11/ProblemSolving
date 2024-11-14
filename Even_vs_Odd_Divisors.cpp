#include<bits/stdc++.h>
using namespace std;
int Tamim(int num) 
{
    int even= 0, odd = 0;
    for (int i = 1; i <= num; i++) 
    {
        if (num% i == 0) 
        {  
            if (i % 2 == 0) 
            {
                even++;  
            } 
            else 
            {
                odd++;   
            }
        }
    }
    if (even> odd) 
    {
        return 1;
    } 
    else if (even== odd)
     {
        return 0;
    } 
    else {
        return -1;
    }
}
int main() 
{
    int test;
    cin >> test;
    while (test--) 
    {
        int n;
        cin >> n;
        cout <<Tamim(n) << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string S;
    cin >> S;
    
    int n = S.length();
    int left = 0, right = n - 1;
    bool poss= true;
    
    while (left <= right) 
    {
        if (S[left] == '?' && S[right] == '?') 
        {
            S[left] = S[right] = 'a'; 
        } 
        else if (S[left] == '?') 
        {
            S[left] = S[right];
        } 
        else if (S[right] == '?') 
        {
            S[right] = S[left];
        } 
        else if (S[left] != S[right]) 
        {
            poss = false;
            break;
        }
        
        left++;
        right--;
    }
    
    if (poss) 
    {
        cout << S << endl;
    } 

    else 
    {
        cout << -1 << endl;
    }
    
    return 0;
}

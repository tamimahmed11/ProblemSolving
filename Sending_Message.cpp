#include <iostream>
#include <string>
using namespace std;

bool Tamim(const string& W, const string& W1)
 {
    int a= W.size();
    int b = W1.size();
    int sum= 0;

    for (int i = 0; i < a&& sum< b; i++)
     {
        if (W[i] == W1[sum]) 
        {
            sum++;
        }
    }

    return (sum==b);
}
int main() 
{
    string W,W1;
    while (cin>>W>>W1) 
    {
        if (Tamim(W,W1)) 
        {
            cout<<"Possible"<<endl;
        } 
        else 
        {
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}

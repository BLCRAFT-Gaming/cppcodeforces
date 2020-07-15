#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        string temp;
        cin >> temp;
        if (temp.compare("++X") == 0 || temp.compare("X++") == 0)
            count++;
        else
            count--;        
    }
    cout << count;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0,temp;
    while (i<5)
    {
        j=0;
        while (j<5)
        {
            cin >> temp;
            if (temp == 1)
                break;
            j++;
        }
        if (temp == 1)
            break;
        i++;
    }
    cout << abs(2-i) + abs(2-j);
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, k, count=0, temp, arr[50];
   cin >> n >> k;
   for (int i = 0;i<n;i++)
      cin >> arr[i];
   for (int i = 0;i<n;i++)
   {
      if (arr[i] != 0 && arr[i]>=arr[k-1])
         count++;
   }
   cout << count;
}
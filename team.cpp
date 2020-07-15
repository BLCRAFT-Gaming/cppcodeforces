#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, count=0, incount, temp;
   cin >> n;
   for (int i = 0;i<n;i++)
   {
      incount = 0;
      for (int j = 0;j<3;j++)
      {
         cin >> temp;
         if (temp == 1)
            incount++;
      }
      if (incount>=2)
      count++;
   }
   cout << count;
}
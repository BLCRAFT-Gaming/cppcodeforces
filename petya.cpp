#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    cout << first.compare(second);
}
/*
problem link: https://cses.fi/problemset/task/1069
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int mx = 0;
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
        }
        else
        {
            mx = max(mx, count);
            count = 1;
        }
    }
    if (count > mx)
        cout << count;
    else
        cout << mx;
    cout << '\n';
}
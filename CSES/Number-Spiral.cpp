/*
problem link: https://cses.fi/problemset/task/1071
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long row, col;
        cin >> row >> col;
        long long mx_in_grid = max(row, col) * max(row, col);
        long long corner = mx_in_grid - max(row, col) + 1;
        if (max(row, col) & 1)
        {
            if (col == max(row, col))
            {
                cout << corner + (max(row, col) - row);
            }
            else
                cout << corner - (max(row, col) - col);
        }
        else
        {
            if (col == max(row, col))
            {
                cout << corner - (max(row, col) - row);
            }
            else
                cout << corner + (max(row, col) - col);
        }
        cout << '\n';
    }
}
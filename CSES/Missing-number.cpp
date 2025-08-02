/*
problem link: https://cses.fi/problemset/task/1083
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    while (n != 1)
    {
        n--;
        long long tmp;
        cin >> tmp;
        sum -= tmp;
    }
    cout << sum << '\n';
}
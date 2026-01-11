/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1474A
*   Language: C++
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string b;
    cin >> b;
    string a = "1";
    for (int i = 1; i < n; i++)
    {
        if ('1' + b[i] != a[i - 1] + b[i - 1])
        {
            a.append("1");
        }
        else
        {
            a.append("0");
        }
    }
    cout << a << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
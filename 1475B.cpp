/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1475B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int cnt2021 = n % 2020;
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
    if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
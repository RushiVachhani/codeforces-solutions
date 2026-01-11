/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1506A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, m, x;
  cin >> n >> m >> x;
  cout << ((x % n == 0 ? n : x % n) - 1) * m +
              (long long)(ceil((float)x / (float)n))
       << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1560A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k;
  cin >> k;
  int count = 0, index = 1;
  while (true) {
    if (count == k) {
      cout << --index << "\n";
      break;
    }
    if (index % 3 != 0 && index % 10 != 3) {
      count++;
    }
    index++;
  }
  return;
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
/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1593A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int getVoteCount(int target, int compare1, int compare2) {
  return max(0, max(compare1, compare2) + 1 - target);
}

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << getVoteCount(a, b, c) << " " << getVoteCount(b, a, c) << " "
       << getVoteCount(c, a, b) << "\n";
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
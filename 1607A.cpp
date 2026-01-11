/*
 *   Author: Rushi Vachhani
 *   Platform: Codeforces
 *   Problem_ID: 1607A
 *   Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int alphabet_array[26] = {0};
  for (int i = 0; i < 26; i++) {
    char x;
    cin >> x;
    alphabet_array[x - 'a'] = i;
  }
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 1; i < s.size(); i++) {
    ans += abs(alphabet_array[s[i] - 'a'] - alphabet_array[s[i - 1] - 'a']);
  }
  cout << ans << "\n";
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
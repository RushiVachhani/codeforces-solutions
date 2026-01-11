/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1520A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if(n==1) {
    cout << "YES\n";
    return;
  } else {
    set<char> unique;
    for(int i=0; i<s.size(); i++) {
      if(i==0) {
        unique.insert(s[i]);
        continue;
      }
      if(s[i]!=s[i-1]) {
        if(unique.count(s[i])) {
          cout << "NO\n";
          return;
        } else {
          unique.insert(s[i]);
        }
      }
    }
    cout << "YES\n";
    return;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for(int i=0; i<t; i++) {
    solve();
  }

  return 0;
}
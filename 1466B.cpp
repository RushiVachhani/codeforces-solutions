/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1466B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x;
    set<int> s;
    while(n--) {
        cin >> x;
        if(s.count(x)==0) { s.insert(x); }
        else { s.insert(++x); }
    }
    cout<<s.size()<<"\n";
    return;
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
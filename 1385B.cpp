/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1385B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s;
    int x;
    for(int i=0; i<2*n; i++) {
        cin >> x;
        auto it = find(s.begin(), s.end(), x);
        if(it!=s.end()) { continue; }
        else { s.push_back(x); }
    }
    for(auto it = s.begin(); it!=s.end(); it++) {
        cout<<*it<<" ";
    }
    
    cout<<"\n";
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
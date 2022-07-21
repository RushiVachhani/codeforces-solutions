/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1287A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<char> s;
    bool input_flag = false; 
    for(int i=0; i<n; i++) {
        char temp;
        cin >> temp;
        if(temp=='A') { input_flag = true; }
        if(input_flag==true) { s.push_back(temp); }
        else { continue; }
    }
    if(s.size()==0 || s.size()==1) { cout<<0<<"\n"; return; }
    int ans = 0, count = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='A') {
            ans = max(ans, count);
            count = 0;
        }
        else { count++; }
    }
    ans = max(ans, count);
    cout<<ans<<"\n";
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
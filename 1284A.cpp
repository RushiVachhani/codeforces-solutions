/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1284A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<string> s1, s2;
    for(int i=0; i<n; i++) {
        string temp;
        cin >> temp;
        s1.push_back(temp);
    }
    for(int i=0; i<m; i++) {
        string temp;
        cin >> temp;
        s2.push_back(temp);
    }
    int q;
    cin >> q;
    vector<string> ans;
    for(int i=0; i<q; i++) {
        int year;
        string yearName = "";
        cin >> year;
        yearName.append(s1[(year-1)%n]).append(s2[(year-1)%m]);
        ans.push_back(yearName);
    }
    for(int i=0; i<q; i++) {
        cout<<ans[i]<<"\n";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
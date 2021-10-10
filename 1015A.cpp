/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1015A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v(m+1, 0);
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        for(int j=a; j<=b; j++) {
            v[j]=1;
        }
    }
    cout<<count(v.begin(), v.end(), 0)-1<<"\n";
    for(int i=1; i<v.size(); i++) {
        if(v[i]==0) { cout<<i<<" "; }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
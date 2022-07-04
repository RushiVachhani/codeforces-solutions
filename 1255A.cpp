/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1255A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int diff = abs(a-b);
    int ans = 0;
    if(diff/5!=0) {
        ans += diff/5;
        diff = diff - 5*(diff/5);
    }
    if(diff/2!=0) {
        ans += diff/2;
        diff = diff - 2*(diff/2);
    }
    if(diff/1!=0) {
        ans += diff/1;
        diff = diff - 1*(diff/1);
    }
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
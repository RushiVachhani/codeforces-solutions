/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1294A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    int max_number, diff;
    max_number = max(a, max(b, c));
    diff = abs(a-max_number) + abs(b-max_number) + abs(c-max_number);
    if(n<diff) { cout<<"NO\n"; return;}
    else {
        n = n - diff;
        if( (n==0) || (n%3==0) ) { cout << "YES\n"; return; }
        else { cout << "NO\n"; return; }
    }
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
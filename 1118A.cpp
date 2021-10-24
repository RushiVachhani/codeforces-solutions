/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1118A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long x,y;
    x = n*a;
    y = (n/2)*b + (n%2)*a;
    x<=y ? cout<<x<<"\n" : cout<<y<<"\n";
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
/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 822A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

long long factorial(int x) {
    long long factorial=1;
    for(int i=1; i<=x; i++) {
        factorial = factorial * i;
    }

    return factorial;
}

void solve() {
    int a,b;
    cin >> a >> b;
    cout<<factorial(min(a,b));
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
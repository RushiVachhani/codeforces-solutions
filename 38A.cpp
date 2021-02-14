/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 38A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ranks[n];
    for(int i=0; i<n-1; i++) {
        cin >> ranks[i];
    }
    int a, b;
    cin >> a >> b;
    a = a-1;
    b = b-1;
    int sum=0;
    cout<<accumulate(ranks+a, ranks+b, sum);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
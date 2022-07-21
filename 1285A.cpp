/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1285A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count_l=0, count_r=0;
    char x;
    while(n--) {
        cin >> x;
        x=='L' ? count_l++ : count_r++;
    }
    cout<<count_r+count_l+1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
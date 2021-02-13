/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 540A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string current, original;
    cin >> current >> original;
    int count = 0;
    for(int i=0; i<current.length(); i++) {
        count = count + min(abs(current[i]-original[i]), 10-abs(current[i]-original[i]));
    }
    cout<<count;
    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 731A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    char currentPosition='a', targetPosition;
    int rotations = 0;
    
    for(int i=0; i<s.length(); i++) {
        targetPosition = s[i];
        rotations += min(abs(currentPosition-targetPosition), 26-abs(currentPosition-targetPosition));
        currentPosition = targetPosition;
    }
    cout<<rotations;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
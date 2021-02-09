/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 431A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int calories[4];
    for(int i=0; i<4; i++) {
        cin >> calories[i];
    }
    int total_calories = 0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        total_calories = total_calories + calories[s[i]-'0'-1];
    }
    cout<<total_calories;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
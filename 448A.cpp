/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 448A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int cup, medal, shelves;
    int total_cups=0, total_medals=0;
    for(int i=0; i<3; i++) {
        cin >> cup;
        total_cups+=cup;
    }
    for(int i=0; i<3; i++) {
        cin >> medal;
        total_medals+=medal;
    }
    cin >>shelves;
    int medal_shelves = (total_medals+10-1)/10;
    int cup_shelves = (total_cups+5-1)/5;
    if((medal_shelves+cup_shelves)>shelves) { cout<<"NO"; return; }
    else { cout<<"YES"; return; }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 265A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string stoneSequence, instructions;
    cin >> stoneSequence >> instructions;
    int position = 0;
    for(int i=0; i<instructions.length(); i++) {
        if(stoneSequence[position] == instructions[i]) { position++; }
    }
    cout<<position+1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
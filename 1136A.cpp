/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1136A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int chapterLast[n];
    for(int i=0; i<n; i++) {
        int first, last;
        cin >> first >> last;
        chapterLast[i]=last;
    }
    int marked;
    cin >> marked;
    int unfinished = 0;
    for(int i=0; i<n; i++) {
        if(marked <= chapterLast[i]) {
            unfinished = n - (i+1) + 1;
            break;
        }
    }
    cout<<unfinished;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
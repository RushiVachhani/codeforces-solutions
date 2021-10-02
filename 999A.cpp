/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 999A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> questions;
    for(int i=0; i<n; i++) {
        int t;
        cin >> t;
        questions.push_back(t);
    }
    int counter=0;
    while(true) {
        if(questions.back()<=k) {
            counter++;
            questions.pop_back();
        }
        else{ break; }
    }
    reverse(questions.begin(), questions.end());
    while(true) {
        if(questions.back()<=k) {
            counter++;
            questions.pop_back();
        }
        else{ break; }
    }
    cout<<counter;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
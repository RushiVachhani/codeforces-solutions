/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 978B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int remove=0, counter=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='x') {
            counter++;
            if(counter>2) {
                remove++;
            }
        }
        else {
            counter=0;
        }
    }
    cout<<remove;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
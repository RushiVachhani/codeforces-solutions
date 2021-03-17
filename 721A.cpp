/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 721A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string crossword;
    cin >> crossword;
    vector<int> size;
    for(int i=0; i<n; i++) {
        if(crossword[i]=='B') {
            int count = 0;
            int j;
            for(j=i; j<n; j++) {
                if(crossword[j]=='B') {
                    count++;
                }
                else { break; }
            }
            i=j;
            size.push_back(count);
        }
    }
    cout<<size.size()<<"\n";
    for(int i=0; i<size.size(); i++) {
        cout<<size[i]<<" ";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
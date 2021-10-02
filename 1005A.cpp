/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1005A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> stairways, steps;
    int stepcount=0;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        if(temp == 1) {
            stairways.push_back(1);
            steps.push_back(stepcount);
            stepcount=1;
        }
        else {
            stepcount++;
        }
    }
    steps.push_back(stepcount);
    cout<<stairways.size()<<"\n";
    for(auto it = steps.begin()+1; it!=steps.end(); it++) {
        cout<<*it<<" ";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
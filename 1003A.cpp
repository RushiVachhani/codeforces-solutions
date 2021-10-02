/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1003A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> arr;
    map<int, int>:: iterator it;
    int max = -1;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        it = arr.find(temp);
        if(it==arr.end()) {
            arr.insert({temp, 1});
            if(max==-1) { max = 1; }
        }
        else {
            it->second ++;
            if(it->second > max) {
                max = it->second;
            }
        }
    }
    cout<<max;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
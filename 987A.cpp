/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 987A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<string, string> stoneColors;
    stoneColors.insert({"yellow", "Mind"});
    stoneColors.insert({"green", "Time"});
    stoneColors.insert({"blue", "Space"});
    stoneColors.insert({"purple", "Power"});
    stoneColors.insert({"red", "Reality"});
    stoneColors.insert({"orange", "Soul"});
    vector<string> stones;
    for(int i=0; i<n; i++) {
        string stone;
        cin >> stone;
        stones.push_back(stone);
    }
    cout<<6-n<<"\n";
    for(auto it=stoneColors.begin(); it!=stoneColors.end(); it++) {
        if(find(stones.begin(), stones.end(), it->first) == stones.end()) {
            cout<<it->second<<"\n";
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
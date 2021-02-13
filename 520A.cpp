/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 520A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    auto res = unique(s.begin(),s.end());
    s = string(s.begin(),res);
    if(s.length()!=26) {
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
    return 0;
}
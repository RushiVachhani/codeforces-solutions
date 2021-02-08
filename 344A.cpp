/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 344A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, count = 0;
    string s,s1="-1";
    cin >> t;
    cin >> s;
    s1=s;
    t--;
    count ++;
    while(t--) {
        cin >> s;
        if(s!=s1) {
            count ++;
        }
        s1 = s;
    }
    cout<<count;
    return 0;
}
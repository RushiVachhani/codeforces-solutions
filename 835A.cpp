/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 835A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int time1, time2;
    time1 = (s*v1) + (2*t1);
    time2 = (s*v2) + (2*t2);
    time1==time2 ? cout<<"Friendship" : time1<time2 ? cout<<"First" : cout<<"Second";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
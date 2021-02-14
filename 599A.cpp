/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 599A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    long long route1, route2, route3, route4;
    route1 = d1+d3+d2;
    route2 = d1+d1+d2+d2;
    route3 = d1+d3+d3+d1;
    route4 = d2+d3+d3+d2;
    cout<<min(route1,min(route2,min(route3,route4)));
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
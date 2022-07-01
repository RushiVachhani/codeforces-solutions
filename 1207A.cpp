/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1207A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int buns, beef_patty, chicken_cutlet, price_hamburger, price_chickenburger;
    cin >> buns >> beef_patty >> chicken_cutlet;
    cin >> price_hamburger >> price_chickenburger;
    int no_hamburgers, no_chickenburgers, profit=0;
    buns = buns/2;
    if(price_hamburger >= price_chickenburger) {
        no_hamburgers = min(buns, beef_patty);
        buns -= no_hamburgers;
        no_chickenburgers = min(buns, chicken_cutlet);
    }
    else {
        no_chickenburgers = min(buns, chicken_cutlet);
        buns -= no_chickenburgers;
        no_hamburgers = min(buns, beef_patty);
    }
    profit = price_hamburger*no_hamburgers + price_chickenburger*no_chickenburgers;
    cout<<profit<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
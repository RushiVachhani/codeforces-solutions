/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1234A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int price, sum_of_prices=0;
    for(int i=0; i<n; i++) {
        cin >> price;
        sum_of_prices += price;
    }
    sum_of_prices%n==0 ? cout<<sum_of_prices/n<<"\n" : cout<<(sum_of_prices/n)+1<<"\n";
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
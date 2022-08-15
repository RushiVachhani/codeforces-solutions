/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1348A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> pile1, pile2; 
    int sum1=0, sum2=0;
    pile1.push_back(pow(2,n));
    for(int i=1; i<=(n/2)-1; i++) {
        pile1.push_back(pow(2,i));
    }
    for(int i=n/2; i<=n-1; i++) {
        pile2.push_back(pow(2,i));
    }
    sum1 = accumulate(pile1.begin(), pile1.end(), sum1);
    sum2 = accumulate(pile2.begin(), pile2.end(), sum2);
    cout<< abs(sum1 - sum2)<<"\n";
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
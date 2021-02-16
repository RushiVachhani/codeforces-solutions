/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 262A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int countLucky(int number, int target) {
    int count = 0;
    while(number) {
        int digit = number%10;
        if(digit==4 || digit==7) {
            count++;
        }
        number /= 10;
    }
    return count;
} 

void solve() {
    int n, k;
    cin >> n >> k;
    int ans=0;
    for(int i=0; i<n; i++) {
        int number;
        cin >> number;
        if(countLucky(number, k)<=k) {
            ans++;
        }
    }
    cout<<ans;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
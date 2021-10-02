/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 919A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    long double arr[n];
    for(int i=0; i<n; i++) {
        long double a,b;
        cin >> a >> b;
        arr[i] = (a/b)*m;
    }
    std::cout << std::setprecision(8) << std::fixed;
    cout<<*min_element(arr, arr+n);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
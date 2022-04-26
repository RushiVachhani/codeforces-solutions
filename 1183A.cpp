/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1183A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while(n) {
        int temp = n%10;
        sum += temp;
        n = n/10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    while(sumOfDigits(n)%4!=0) {
        n++;
    }
    cout<<n;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
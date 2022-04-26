/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1176A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    if(n==1) { cout<<0<<"\n"; return; }
    else{
        long long count2=0, count3=0, count5=0;
        while(n%2==0) {
            n = n/2;
            count2++;

        }
        while(n%3==0) {
            n = n/3;
            count3++;
        }
        while(n%5==0) {
            n = n/5;
            count5++;
        }
        if(n!=1) { cout<<-1<<"\n"; return; }
        else { cout<<count2 + (2*count3) + (3*count5)<<"\n"; return; }
    }
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
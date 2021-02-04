/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 148A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k,l,m,n,d,count = 0,flag;
    cin >> k >> l >> m >> n >> d;

    if(k>d && l>d && m>d && n>d) {
        cout << 0;
        return 0;
    }

    if(k==1 || l==1 || m==1 || n==1) {
        cout<< d;
        return 0;
    }

    for(int i=2 ; i<=d; i++) {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) {
            count++;
        }
    }
    cout<<count;
    return 0;
}
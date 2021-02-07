/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 268A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int isPresent(int x, int u[], int n) {
    int count=0;
    for(int i=0 ; i<n; i++) {
        if(u[i]==x) {
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int hu[n], gu[n]={-1}, count=0;
    for(int i=0 ; i<n; i++) {
        cin >> hu[i] >> gu[i];
    }
    for(int i=0 ; i<n; i++) {
        count = count + isPresent(hu[i], gu, n);
    }
    cout<<count;
    return 0;
}
/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 34A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int indice1, indice2, mindiff=INT32_MAX;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=1; i<n; i++) {
        if(abs(arr[i]-arr[i-1])<mindiff) {
            indice1 = i-1;
            indice2 = i;
            mindiff = abs(arr[i]-arr[i-1]);
        }
    }
    if(abs(arr[0]-arr[n-1])<mindiff) {
        indice1 = 0;
        indice2 = n-1;
        mindiff = abs(arr[0]-arr[n-1]);
    }
    cout<<indice2+1<<" "<<indice1+1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
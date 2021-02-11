/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 510A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    char hash[m]={'#'}, hashdot[m];
    for(int i=0 ; i<m; i++) {
        if(i==m-1) { hashdot[i]='#';}
        else { hashdot[i]='.';}
        hash[i] = '#';
    }
    bool flag = true;
    for(int i=1 ; i<=n; i++) {
        for(int j=0; j<m; j++) {
            if(i%2!=0) {
                cout<<hash[j];
            }
            else {
                cout<<hashdot[j];
            }
        }
        cout<<"\n";
        if(i%2==0) {
            reverse(hashdot,hashdot+m);
        }
    }
    return 0;
}